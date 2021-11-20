#include "jesus.h"
#include"includes.h"

void Gjesus::link()//opens rick roll video
{
	system("cls");
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		TEXT(""), NULL, SW_HIDE);
}

