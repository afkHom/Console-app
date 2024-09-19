#include "includes.h"
//#include "HWID.h"

//#include <iostream>
 //i hate that i fixed it like this but i really dont care 

//#include <Windows.h> 

using namespace std;


gMal mal;
Gjesus jsus;


int main()
{
   
    // Get hardware information
    mal.GetMBSerial();

     // Step 1: Initialize the buffer size
    DWORD size = MAX_COMPUTERNAME_LENGTH + 1;
    std::vector<wchar_t> computerName(size);

    // Step 2: Get the computer name using Unicode version
    if (GetComputerNameW(computerName.data(), &size)) {
        // Successfully retrieved the name
        std::wcout << L"Hello " << computerName.data() << std::endl;
        
    }
    else {
        std::wcerr << L"Failed to retrieve computer name. Error: " << GetLastError() << std::endl;
    }

    // Display logo
    mal.logo();
    wcerr << "test program| Executable name sumfinn.exe\n";
    //Sleep(1500);
    mal.clearScreen();

    // Display acceptance/denial message for testing
    mal.accptdeny(); // for testing

    // Ask questions
    mal.questions();
    
    return 0;
}




