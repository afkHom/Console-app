#include"includes.h"
using namespace std;
gMal mal;//why does having Gjesus defined in here conflict with gMal? <- :) guess not anymore
Gjesus jsus;


 //Program execution begins here
// https://www.youtube.com/watch?v=dQw4w9WgXcQ for safe keeping
//idk i might just give up on it just not feeling it anymore, atleast not right now.
int main()
{	
	 
	#include "includes.h"

using namespace std;

class gHWID {
public:
    unordered_set<string> hwids;

    void loadHWIDs() {
        // replace with your HWIDs
        hwids.insert("1731602307");
        hwids.insert("1234567890");
        // add more as needed
    }

    void HWCINIT() {
        TCHAR volumeName[MAX_PATH + 1] = { 0 };
        DWORD serialNumber = 0;
        DWORD maxComponentLen = 0;
        DWORD fileSystemFlags = 0;

        if (GetVolumeInformation(
            L"C:\\",
            volumeName,
            ARRAYSIZE(volumeName),
            &serialNumber,
            &maxComponentLen,
            &fileSystemFlags,
            NULL,
            0)) {
            // Successfully retrieved volume serial number
        }

        int cpuinfo[4] = { 0, 0, 0, 0 };
        __cpuid(cpuinfo, 0);
        char16_t hash = 0;
        char16_t* ptr = (char16_t*)(&cpuinfo[0]);
        for (char32_t i = 0; i < 8; i++)
            hash += ptr[i];

        loadHWIDs();

        while (true) {
            if (hwids.find(to_string(serialNumber)) != hwids.end()) {
                std::cout << "nice you are in our auth system!!";
            }
            else {
                std::cout << "The HWID " << serialNumber << " isn't in the whitelist ; (";
            }
        }
    }
};

	
	
	
	
	
	
	
	
	
	
	// I really might have to put the entire hwid system in in here i might cry 
	// ^^sets window name
	mal.logo();
	cout << "test program| Executable name sumfinn.exe\n";
	cout << "it will open links on your computer, and stay open in the background\n";
	cout << "it is nothing malicious, just a warning\n";
	//cout << localeName;
	Sleep(4000);
	system("cls");
	mal.accptdeny(); //for testing 
	mal.questions();
	
	
}