#include"includes.h"
#include <functional>
//from looking back at my own code i think i was calling jesus to mal and using mal  in sumfinn.cpp



using namespace std;
//char accpt;
string accpt;
Gjesus jesus;
#include <Windows.h>

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
	printCurrentTime();

	Sleep(3000);

	system("cls");
	// Reset the text color to the default value
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "test program| Executable name sumfinn.exe\n";
	cout << "it will open links on your computer, and stay open in the background\n";
	cout << "it is nothing malicious, just a warning\n";
	Sleep(3000);
	//cout << "The Process ID Should be copied to your clipboard" << std::endl; 
	Sleep(3000);
	system("cls");

	
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
	
		//HWND hWnd = GetConsoleWindow();
		//(hWnd, SW_HIDE);
		//ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/channel/UCb8BlWfbsnWifmscDWN6axA"),
		//	TEXT(""), NULL, SW_HIDE);
		//system("pause");
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

		// Wait for 1 second before updating the time again
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}


	





	
