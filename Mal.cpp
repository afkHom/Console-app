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
#include <stdlib.h>\
#include "Mal.h"
 

void gMal::mal()
{
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		TEXT(""), NULL, SW_HIDE);
}