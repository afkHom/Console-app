#include "Mal.h"
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <filesystem>
#include <regex>
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <WinUser.h>
char RickRoll;
char Test;
char accpt;
char deny;
using namespace std;

//NOTE// Just rewrite the entire thing today. it hurts for my brain to look at
void gMal::link()//opens rick roll video
{
	system("cls");
	cout << "W= Rick\nA= Test, my yt channel";
	cout << "\nEnter Here:";
	cin >> Test;
	if (GetAsyncKeyState(0x57))
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
	//MessageBoxA(NULL, "Why? Fuck you. Thats why.", "The program is open in the background.", MB_OK | MB_ICONHAND);
	//system("pause");
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
 
}