#include"includes.h"
char qstn; // hopefully i can only use this one because i dont feel like declaring 20 of these
using namespace std;
gMal Mal;
void Gjesus::link()//opens rick roll video
{
	system("cls");
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		TEXT(""), NULL, SW_HIDE);
	// ill make it loop eventually
}
void Gjesus::question()
{
	system("cls");
	cout << "We will now ask some questions.\nIs this okay?\nY/N\n";
	cin >> qstn;
	if (qstn == 'Y' || qstn == 'y')
	{
		cout << "We will continute shortly";
		Mal.questions();
	}
	else if (qstn == 'N' || qstn == 'n')
	{
		cout << "Oh well... Thank you!\nPlease allow us to close properly, thank you.";
		Sleep(3000);
		system("cls");
		HWND hWnd = GetConsoleWindow();
		ShowWindow(hWnd, SW_HIDE);
		ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=bIIFmhtceDA"),
			TEXT(""), NULL, SW_HIDE);
		system("pause");
	}
}
void Gjesus::FileDeletion()// this is just a test to see if i can delete files
{
	
	
}
void Gjesus::LocalName()
{
	TCHAR name[UNLEN + 1];
	DWORD size = UNLEN + 1;

	if (GetUserName((TCHAR*)name, &size))
		wcout << L"Hello, " << name << L"!\n";
	else
		cout << "Why cant i find your name. Whatre you hiding weirdo\n";
}