#include <iostream>
#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include "link.h"

//#include <webhook.h>
#define _WIN32_WINNT 0x0500
// sumfinn.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://www.youtube.com/watch?v=dQw4w9WgXcQ for safe keeping



int main()
{

// text displayed to the user
 Sleep(500);
 std::cout << "Hopefully this works\n";
 Sleep(600);
 std::cout << "If you can read this it is already too late\nyou cannot run ";
 // text displayed to the user
 // User input
 bool string1[20];
 std::cout << "\n ";
 for (int i = 0; i < 1; i++)
 {
	 std::cin >> string1[i];
 }
 int counter = 0;
 int length;
 length = sizeof(string1) / sizeof(string1[0]);
 std::cout << length;
 // User input
 // link openererer
 // Sleep(2000); // i want it to be delayed for a second before it actually opens
 HWND hWnd = GetConsoleWindow();
 ShowWindow(hWnd, SW_HIDE);
 ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
	 TEXT(""), NULL, SW_HIDE);
 // link openererer
 //test(might get malicious idk yet)
  MessageBoxA(NULL, "Why? Fuck you. Thats why.", "The program is open in the background.", MB_OK | MB_ICONHAND);
  system("pause");
 //test
}









// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
