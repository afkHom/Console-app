#include"includes.h"
char qstn; // hopefully i can only use this one because i dont feel like declaring 20 of these
using namespace std;
gMal mal;
void Gjesus::link()//opens rick roll video
{
	system("cls");
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		TEXT(""), NULL, SW_HIDE);
}

void Gjesus::question()
{
	system("cls");
	cout << "We will now ask some questions.\nIs this okay?\n";
	cin >> qstn;
	if (qstn == 'Yes' || qstn == 'yes')
	{
		cout << "We will continute shortly";
	}
	else if (qstn == 'No' || qstn == 'no')
	{
		cout << "Oh well... Thank you!\nPlease allow us to close properly, thank you.";
		mal.link();
	}
}