#include"includes.h"
#include <functional>
#pragma comment(lib, "wbemuuid.lib")
//from looking back at my own code i think i was calling jesus to mal and using mal  in sumfinn.cpp

using namespace std;
//char accpt;
string accpt;
Gjesus jesus;

void gMal::logo()
{
	// Define the colors to use for the rainbow effect
	const int colors[] = {
		FOREGROUND_RED,
		FOREGROUND_RED | FOREGROUND_GREEN,
		FOREGROUND_GREEN,
		FOREGROUND_GREEN | FOREGROUND_BLUE,
		FOREGROUND_BLUE,
		FOREGROUND_BLUE | FOREGROUND_RED
	};

	// Set the initial text color to red
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors[0]);

	// Display the logo using the rainbow colors
	cout << "  _    _                 \n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors[1]);
	Sleep(200);
	cout << " | |  | |                \n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors[2]);
	Sleep(200);
	cout << " | |__| | ___  _ __ ___  \n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors[3]);
	Sleep(200);
	cout << " |  __  |/ _ \| '_ ` _ \ \n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors[4]);
	Sleep(200);
	cout << " | |  | | (_)| | | | | |\ \n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors[5]);
	Sleep(200);
	cout << " |_|  |_|\___/|_| |_| |_|\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors[0]);
	Sleep(200);
	cout << "Made By:by Hom#2913\n";
	Sleep(200);
	cout << "https://github.com/afkHom \n";

	Sleep(200);
	jesus.LocalName();
	//printCurrentTime();

	Sleep(3000);

	clearScreen();
	// Reset the text color to the default value
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "test program| Executable name sumfinn.exe\n";
	cout << "it will open links on your computer, and stay open in the background\n";
	cout << "it is nothing malicious, just a warning\n";
	Sleep(3000);
	//cout << "The Process ID Should be copied to your clipboard" << std::endl; 
	Sleep(3000);
	clearScreen();

	
}

void gMal::accptdeny()
{// A=0x41 D=0x44
	cout << "Accept or Deny here please\n:";
	cin >> accpt;
	if (accpt == "Accept")
 {
	 cout << "accepted, proceeding";
	 Sleep(1000);
	 cout << ".";
	 Sleep(1000);
	 cout << ".";
	 Sleep(1000);
	 cout << ".";//theres probably a better way of doing this, but i just genuinelly dont care. Its 1:51 AM
	 jesus.question();
	 //jesus.link(); I want this to be the last used thing, i just dont know where itll end yet
 }
 else if(accpt == "Denied")
 {
	 cout << "shutting down";
	 Sleep(1000);

	
	 HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); //Shuts down program after Denial, probably a better way to do this but fuck it 
	 if (snapshot != INVALID_HANDLE_VALUE)
	 {
		 PROCESSENTRY32 processInfo;
		 processInfo.dwSize = sizeof(PROCESSENTRY32);

		 if (Process32First(snapshot, &processInfo))
		 {
			 do
			 {
				 if (wcscmp(processInfo.szExeFile, L"sumfinn.exe") == 0)
				 {
					 // Found the process, now try to open it and terminate it
					 HANDLE processHandle = OpenProcess(PROCESS_TERMINATE, FALSE, processInfo.th32ProcessID);
					 if (processHandle != NULL)
					 {
						 TerminateProcess(processHandle, 0);
						 CloseHandle(processHandle);
						// MessageBoxA(NULL,"Cum Fucker", "RAAAAAAH!", MB_OK); doesnt seem to work atm idk ill try later maybe
						 
					 }
				 }
			 } while (Process32Next(snapshot, &processInfo));
		 }

		 CloseHandle(snapshot);
	 }
	 
 }
}

//idk how this is going to work. this is probably going to be very messy game of back and forth between files
void gMal::questions()
{
	//jesus.FileDeletion();
	jesus.link();
	
		
}

void gMal::printCurrentTime() {
	while (true) {
		// Get the current time
		std::time_t current_time = std::time(nullptr);

		// Initialize a struct tm object to store the local time
		std::tm time_info;
		localtime_s(&time_info, &current_time);

		// Determine AM/PM and hour in 12-hour format
		std::string am_pm = (time_info.tm_hour < 12) ? "AM" : "PM";
		int hour_12_format = (time_info.tm_hour % 12 == 0) ? 12 : time_info.tm_hour % 12;

		// Print the time in 12-hour clock format
		std::cout << "\rThe current time is: " << hour_12_format << ":" << time_info.tm_min << ":" << time_info.tm_sec << " " << am_pm << std::flush;

	}
}

void gMal::clearScreen() {
#include <windows.h>

	void clearScreen(); 
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		DWORD count, cellCount;
		COORD homeCoords = { 0, 0 };

		// Get the current buffer info
		if (!GetConsoleScreenBufferInfo(hConsole, &csbi)) {
			return;
		}

		cellCount = csbi.dwSize.X * csbi.dwSize.Y;

		// Fill the console with spaces
		if (!FillConsoleOutputCharacter(hConsole, (TCHAR)' ', cellCount, homeCoords, &count)) {
			return;
		}

		// Fill the console with the default text attribute
		if (!FillConsoleOutputAttribute(hConsole, csbi.wAttributes, cellCount, homeCoords, &count)) {
			return;
		}

		// Set the cursor position to the top-left corner
		SetConsoleCursorPosition(hConsole, homeCoords);

	}

}

void gMal::GetMBSerial() {
	// Step 1: Initialize COM
	HRESULT hres = CoInitializeEx(0, COINIT_MULTITHREADED);
	if (FAILED(hres)) {
		std::cerr << "Failed to initialize COM library. Error code = 0x" << std::hex << hres << std::endl;
		return;
	}

	// Step 2: Set general COM security levels
	hres = CoInitializeSecurity(
		NULL, -1, NULL, NULL,
		RPC_C_AUTHN_LEVEL_DEFAULT,
		RPC_C_IMP_LEVEL_IMPERSONATE,
		NULL, EOAC_NONE, NULL);

	if (FAILED(hres)) {
		std::cerr << "Failed to initialize security. Error code = 0x" << std::hex << hres << std::endl;
		CoUninitialize();
		return;
	}

	// Step 3: Obtain the initial locator to WMI
	IWbemLocator* pLoc = NULL;
	hres = CoCreateInstance(CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, IID_IWbemLocator, (LPVOID*)&pLoc);

	if (FAILED(hres)) {
		std::cerr << "Failed to create IWbemLocator object. Error code = 0x" << std::hex << hres << std::endl;
		CoUninitialize();
		return;
	}

	// Step 4: Connect to WMI
	IWbemServices* pSvc = NULL;
	hres = pLoc->ConnectServer(_bstr_t(L"ROOT\\CIMV2"), NULL, NULL, 0, NULL, 0, 0, &pSvc);

	if (FAILED(hres)) {
		std::cerr << "Could not connect to WMI server. Error code = 0x" << std::hex << hres << std::endl;
		pLoc->Release();
		CoUninitialize();
		return;
	}

	// Step 5: Set security levels on the proxy
	hres = CoSetProxyBlanket(
		pSvc, RPC_C_AUTHN_WINNT, RPC_C_AUTHZ_NONE, NULL,
		RPC_C_AUTHN_LEVEL_CALL, RPC_C_IMP_LEVEL_IMPERSONATE,
		NULL, EOAC_NONE);

	if (FAILED(hres)) {
		std::cerr << "Could not set proxy blanket. Error code = 0x" << std::hex << hres << std::endl;
		pSvc->Release();
		pLoc->Release();
		CoUninitialize();
		return;
	}

	// Step 6: Use WMI to query motherboard information
	IEnumWbemClassObject* pEnumerator = NULL;
	hres = pSvc->ExecQuery(
		bstr_t("WQL"),
		bstr_t("SELECT SerialNumber FROM Win32_BaseBoard"),
		WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
		NULL,
		&pEnumerator);

	if (FAILED(hres)) {
		std::cerr << "WMI query failed. Error code = 0x" << std::hex << hres << std::endl;
		pSvc->Release();
		pLoc->Release();
		CoUninitialize();
		return;
	}

	// Step 7: Get the data from the query result
	IWbemClassObject* pclsObj = NULL;
	ULONG uReturn = 0;

	while (pEnumerator) {
		HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1, &pclsObj, &uReturn);

		if (uReturn == 0) {
			break;
		}

		VARIANT vtProp;
		hr = pclsObj->Get(L"SerialNumber", 0, &vtProp, 0, 0);
		if (SUCCEEDED(hr)) {
			// Convert wide string (BSTR) to narrow string (std::string)
			_bstr_t bstrSerialNumber(vtProp.bstrVal);
			std::string serialNumber = (const char*)bstrSerialNumber;

			// Output the serial number to the console
			std::cout << "Motherboard Serial Number: " << serialNumber << std::endl;
		}
		VariantClear(&vtProp);
		pclsObj->Release();
	}

	// Cleanup
	pSvc->Release();
	pLoc->Release();
	pEnumerator->Release();
	CoUninitialize();
}
	





	
