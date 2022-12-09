#include"includes.h"
#include <functional>
//from looking back at my own code i think i was calling jesus to mal and using mal  in sumfinn.cpp



using namespace std;
char RickRoll;
char Test;
char accpt;
char deny;
char answer;
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
	Date();

	Sleep(3000);

	system("cls");
	// Reset the text color to the default value
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "test program| Executable name sumfinn.exe\n";
	cout << "it will open links on your computer, and stay open in the background\n";
	cout << "it is nothing malicious, just a warning\n";
	Sleep(3000);
	cout << "The Process ID Should be copied to your clipboard" << std::endl; 
	Sleep(3000);
	system("cls");

	
}

void gMal::accptdeny()
{// A=0x41 D=0x44
	cout << "Accept or Deny here please\n:";
	cin >> accpt;
 if(accpt== 'A' || accpt== 'a')
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
 else if(accpt== 'D' || accpt== 'd')
 {
	 cout << "denied\n";
	 cout << "shutting down";
	 Sleep(1000);

	 //safer way to close application
	 HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
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
	jesus.FileDeletion();
	
		//HWND hWnd = GetConsoleWindow();
		//(hWnd, SW_HIDE);
		//ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/channel/UCb8BlWfbsnWifmscDWN6axA"),
		//	TEXT(""), NULL, SW_HIDE);
		//system("pause");
}

void gMal::Date(){
	time_t current_time;
	struct tm time_info;

	// Get the current time
	time(&current_time);

	// Convert the current time to local time
	localtime_s(&time_info, &current_time);

	// Print the time in 12-hour clock format
	printf("The current time is: %d:%d:%d %s\n", time_info.tm_hour % 12, time_info.tm_min, time_info.tm_sec, time_info.tm_hour < 12 ? "AM" : "PM");

	return;
}


	





	
