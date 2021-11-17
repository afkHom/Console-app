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
using namespace std;
void gMal::link()//opens rick roll video
{
	std::cout << "Enter Rick Roll(please idk how to code it so\n it works otherwise.)\nEnter here: ";
	std::cin; RickRoll;
	std::cin.get();
	Sleep(2000); // i want it to be delayed for a second before it actually opens
	
	//anything below this line will basically just run in the background. unless i remove the system("pause")
	//MessageBoxA(NULL, "Why? Fuck you. Thats why.", "The program is open in the background.", MB_OK | MB_ICONHAND);
	//system("pause");
}
void gMal::input()//user input
{
	
	//std::cout<< "Hopefully this works\n";
	Sleep(300);
	//std::cout<< "If you can read this it is already too late\nyou cannot run ";
	//
	cout << "Enter rick roll\n(please idk how to code it so it doesnt work otherwise)\n Actually Enter Here:";
	cin >> RickRoll;
}
void gMal::KeyStateTest()
{
	cout << "W= Rick";
	cin >> Test;
 if(GetAsyncKeyState(0x57))
 {
	 HWND hWnd = GetConsoleWindow();
	 ShowWindow(hWnd, SW_HIDE);
	 ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		 TEXT(""), NULL, SW_HIDE);
 }
 //system("pause");
}