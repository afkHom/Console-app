#include"includes.h"
char question; // hopefully i can only use this one because i dont feel like declaring 20 of these
using namespace std;
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
	

}