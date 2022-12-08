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

void gMal::logo()
{
	//Logo causes small errors, it doesnt break anything.
	cout << "  _    _                 \n";
	Sleep(100);
	cout << " | |  | |                \n";
	Sleep(100);
	cout << " | |__| | ___  _ __ ___  \n";
	Sleep(100);
	cout << " |  __  |/ _ \| '_ ` _ \ \n";
	Sleep(100);
	cout << " | |  | | (_)| | | | | |\ \n";
	Sleep(100);
	cout << " |_|  |_|\___/|_| |_| |_|\n";
	Sleep(100);
	cout << "Made By:by Hom#2913\n";
	cout << "https://github.com/afkHom \n";	
	Sleep(200);
	jesus.LocalName();


	time_t current_time;
	struct tm time_info;

	// Get the current time
	time(&current_time);

	// Convert the time to local time
	localtime_s(&time_info, &current_time);

	// Use the fields of the tm structure to print the time in a human-readable format
	printf("The current time is: %d:%d\n", time_info.tm_hour, time_info.tm_min);


	Sleep(3000);
	system("cls");
}
void gMal::accptdeny()
{
	// A=0x41 D=0x44
	char accpt = '\0';
	while (accpt != 'A' && accpt != 'D')
	{
		std::cout << "Accept or Deny here please\n:";
		std::cin >> accpt;
	}

	if (accpt == 'A')
	{
		std::cout << "accepted, proceeding" << std::endl;
		jesus.question();
	}
	else if (accpt == 'D')
	{
		std::cout << "denied" << std::endl;
		return;
	}
}


//------------------------------------------------------------------------------------------idk how this is going to work. this is probably going to be very messy game of back and forth between files
void gMal::questions()
{
	system("cls");
	
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
	





	
