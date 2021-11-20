#include "Mal.h"
#include"jesus.h"
#include"includes.h"
Gjesus jesus;
char RickRoll;
char Test;
char accpt;
char deny;

using namespace std;
//NOTE// Just rewrite the entire thing today. it hurts for my brain to look at
void gMal::link()//opens rick roll video
{
	
}
void gMal::input()//user input
{//going to try
	
	//std::cout<< "Hopefully this works\n";
	Sleep(300);
	//std::cout<< "If you can read this it is already too late\nyou cannot run ";
	//
	cout << "Enter rick roll\n(please idk how to code it so it doesnt work otherwise)\n Actually Enter Here:";
	cin >> RickRoll;
}
void gMal::KeyStateTest()
{
	cout << "W= Rick\nA= Test, my yt channel";
	cout << "\nEnter Here:";
	cin >> Test;
	if(GetAsyncKeyState(0x57))
 {
	 HWND hWnd = GetConsoleWindow();
	 ShowWindow(hWnd, SW_HIDE);
	 ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		 TEXT(""), NULL, SW_HIDE);
 }
	else if (GetAsyncKeyState(0x41))
	{
		HWND hWnd = GetConsoleWindow();
		ShowWindow(hWnd, SW_HIDE);
		ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/channel/UCb8BlWfbsnWifmscDWN6axA"),
			TEXT(""), NULL, SW_HIDE);
	}
}
void gMal::accptdeny()
{// A=0x41 D=0x44
	system("cls");
	cout << "Accept or Deny here please\n :";
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
	 cout << "\nworked";
	 jesus.link();
 }
 else if(accpt== 'D' || accpt== 'd')
 {
	 system("taskkill /IM Discord.exe /F");
	 cout << "denied";
	 cin >> deny;
 }
}