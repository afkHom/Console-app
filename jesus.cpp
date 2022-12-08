#include"includes.h"
char qstn; // hopefully i can only use this one because i dont feel like declaring 20 of these
using namespace std;
gMal Mal;
void Gjesus::link()//opens rick roll video
{
	//url to open
	std::string url = "https://www.youtube.com/channel/UCb8BlWfbsnWifmscDWN6axA";
	//funny whur box opens link
	int result = system(("start " + url).c_str());
    //check result
	if (result == 0) {
		std::cout << "Shit popped" << std::endl;
	} else {
		std::cout << "there was an error" << std::endl;
	}
	return;

	 /* system("cls");
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"),
		TEXT(""), NULL, SW_HIDE);
	// ill make it loop eventually*/
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
	}
}
void Gjesus::FileDeletion() {  //i really just tried to compile a c++ project with c# code
	std::string file_path;
	//Prompts user to input a filepath
	std::cout << "Enter the filepath of the file you want to delete: ";

	//Reads file path
	std::cin >> file_path;

	//deletes file
	int result = std::remove(file_path.c_str());

	//checks if file was deleted
	if (result == 0)
	{
		std::cout << "File Deleted Successfully." << std::endl;
	}
	else
	{
		std::cout << "Error Deleting File" << std::endl;
	}
	return;

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