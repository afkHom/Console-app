#include "includes.h"
using namespace std;
#pragma comment(lib, "Cfgmgr32.lib")


void gHWID::HWCINIT()
{

	HW_PROFILE_INFO hwProfileInfo;
	if (GetCurrentHwProfile(&hwProfileInfo) != NULL) {
		std::cout << "HWID: " << hwProfileInfo.szHwProfileGuid << std::endl;
		
	}

	// List of allowed HWIDs
	vector<string> allowed_hwids = { "hwid1", "hwid2", "hwid3" };

	// Get the HWID of the current system
	string hwid = "hwid1"; // Replace with actual HWID

	// Check if the HWID is in the list of allowed HWIDs
	if (find(allowed_hwids.begin(), allowed_hwids.end(), hwid) == allowed_hwids.end()) {
		cout << "HWID not found in the list of allowed HWIDs. Closing the program..." << endl;
		exit(0);
	}
	//  
};

