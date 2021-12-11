#include"includes.h"
char qstn; // hopefully i can only use this one because i dont feel like declaring 20 of these
char darkie;
using namespace std;
gMal test;
void Gjesus::link()//opens rick roll video
{
	//got an error with all of these that i dont care to try and fix.
}
void Gjesus::question()
{
	system("cls");
	cout << "We will now ask some questions.\nIs this okay?\nY/N\n";
	cin >> qstn;
	if (qstn == 'Y' || qstn == 'y')
	{
		cout << "We will continute shortly";
		test.questions();
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

void Gjesus::lildarkie()
{
	cout << "I literally forgot what i was gonna try to make and i have work in like 8 mintues so here goes nothing.\n";
	cout << "this is a test:"; cin >> darkie;
	cout << darkie;
	//ik ive done it before where i got the cin to be output in the cout somehow and i dont feel like going back in my own source and looking for it.
}
