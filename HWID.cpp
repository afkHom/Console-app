#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <intrin.h>
#include <comdef.h>
#include <Wbemidl.h>
#pragma comment(lib, "wbemuuid.lib")

std::string GetCpuId() {
    int cpuInfo[4] = { -1 };
    __cpuid(cpuInfo, 0);
    char cpuIdStr[33];
    snprintf(cpuIdStr, sizeof(cpuIdStr), "%08X%08X", cpuInfo[3], cpuInfo[0]); // EAX, EBX, ECX, and EDX
    return std::string(cpuIdStr);
}

std::string GetMotherboardSerial() {
    HRESULT hres = CoInitializeEx(0, COINIT_MULTITHREADED);
    if (FAILED(hres)) {
        return "Failed to initialize COM library.";
    }

    hres = CoInitializeSecurity(
        NULL,
        -1,
        NULL,
        NULL,
        RPC_C_AUTHN_LEVEL_DEFAULT,
        RPC_C_IMP_LEVEL_IMPERSONATE,
        NULL,
        EOAC_NONE,
        NULL
    );

    if (FAILED(hres)) {
        CoUninitialize();
        return "Failed to initialize security.";
    }

    IWbemLocator* pLoc = NULL;
    hres = CoCreateInstance(
        CLSID_WbemLocator,
        0,
        CLSCTX_INPROC_SERVER,
        IID_IWbemLocator, (LPVOID*)&pLoc);

    if (FAILED(hres)) {
        CoUninitialize();
        return "Failed to create IWbemLocator object.";
    }

    IWbemServices* pSvc = NULL;
    hres = pLoc->ConnectServer(
        _bstr_t(L"ROOT\\CIMV2"),
        NULL,
        NULL,
        0,
        NULL,
        0,
        0,
        &pSvc);

    if (FAILED(hres)) {
        pLoc->Release();
        CoUninitialize();
        return "Failed to connect to WMI.";
    }

    hres = CoSetProxyBlanket(
        pSvc,
        RPC_C_AUTHN_WINNT,
        RPC_C_AUTHZ_NONE,
        NULL,
        RPC_C_AUTHN_LEVEL_CALL,
        RPC_C_IMP_LEVEL_IMPERSONATE,
        NULL,
        EOAC_NONE
    );

    if (FAILED(hres)) {
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return "Failed to set proxy blanket.";
    }

    IEnumWbemClassObject* pEnumerator = NULL;
    hres = pSvc->ExecQuery(
        bstr_t("WQL"),
        bstr_t("SELECT * FROM Win32_BaseBoard"),
        WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
        NULL,
        &pEnumerator);

    if (FAILED(hres)) {
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return "Query for motherboard failed.";
    }

    IWbemClassObject* pclsObj = NULL;
    ULONG uReturn = 0;

    while (pEnumerator) {
        HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1, &pclsObj, &uReturn);
        if (0 == uReturn) {
            break;
        }

        VARIANT vtProp;
        hr = pclsObj->Get(L"SerialNumber", 0, &vtProp, 0, 0);
        std::string serialNumber; // Declare serialNumber here

        if (SUCCEEDED(hr) && vtProp.vt == VT_BSTR && vtProp.bstrVal != nullptr) {
            _bstr_t bstrSerialNumber(vtProp.bstrVal, false);
            serialNumber = static_cast<const char*>(bstrSerialNumber); // Assign value here
        }
        else {
            // Handle error or null case
        }

        VariantClear(&vtProp);

        pclsObj->Release();
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return serialNumber;
    }

    pSvc->Release();
    pLoc->Release();
    CoUninitialize();
    return "No motherboard information found.";
}

