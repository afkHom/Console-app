#include"includes.h"
using namespace std;
char RickRoll;
char Test;
char accpt;
char deny;
char answer;
Gjesus jesus;
void gMal::logo()
{
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
	Sleep(3000);
	system("cls");
}
void gMal::accptdeny()
{// A=0x41 D=0x44
	system("cls");
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
	 //system("taskkill /IM sumfinn.exe /F"); this line isnt needed. Program returns 0 anyway
	 
 }
}

//------------------------------------------------------------------------------------------idk how this is going to work. this is probably going to be very messy game of back and forth between files
void gMal::questions()
{
	system("cls");
	cout << "The questions will be Y/N\n";
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
	{
		cout << "Cool, let me think of how im gonna code the rest of this rq.\n";
		Sleep(3000);
		cout << "Honestly"; Sleep(500); cout<<"I have no idea how im going to do this\n So... ";//yes im keeping it here. i dont care if it hurts your eyes go away stop looking at my code you fucking filthy piece of shit get off my repo. Go paste something else you worthless piece of shit
		cout << "So like its just gonna close now. Have a good one or whatever"; Sleep(2000);
		jesus.link();
		MessageBoxA(NULL, "yes you did just get rick rolled.", "yes", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "The programs still open in the background because i felt like it. Have fun closing it.", "Also...", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "", "", MB_OK | MB_ICONHAND);
		MessageBoxA(NULL, "thats all", "Thanks!", MB_OK | MB_ICONHAND);
		HWND hWnd = GetConsoleWindow();
		ShowWindow(hWnd, SW_HIDE);
		ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/channel/UCb8BlWfbsnWifmscDWN6axA"),
			TEXT(""), NULL, SW_HIDE);
		//system("pause"); //turned off bc on testing branch, but i probably forgot to enable it on the main branch
	}
	else if (answer == 'N' || answer == 'n')
	{
	  // i dont feel like putting something here
	}
	
}