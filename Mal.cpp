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
#include "Mal.h"
 

void gMal::mal()
{
	Sleep(2000); // i want it to be delayed for a second before it actually opens
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		TEXT(""), NULL, SW_HIDE);
}

void gMal::uint()
{
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
}