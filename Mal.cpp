#include"includes.h"
char RickRoll;
char Test;
char accpt;
char deny;
char answer;
using namespace std;
Gjesus jesus;
void gMal::logo()
{
	cout << "  _    _                 \n";
	Sleep(100);
	cout << " | |  | |                \n";
	Sleep(100);
	cout << " | |__| | ___  _ __ ___  \n";
	Sleep(100);
	cout << " |  __  |/ _ \| '_ ` _ \ \n";
	Sleep(100);
	cout << " | |  | | (_)| | | | | |\ \n";
	Sleep(100);
	cout << " |_|  |_|\___/|_| |_| |_|\n";
	Sleep(100);
	cout << "Made By:by Hom#2913\n";
	cout << "https://github.com/afkHom \n";
	Sleep(3000);
	system("cls");
}
void gMal::accptdeny()
{// A=0x41 D=0x44
	system("cls");
	cout << "Accept or Deny here please\n:";
	cin >> accpt;
 if(accpt== 'A' || accpt== 'a')
 {
	 cout << "accepted, proceeding";
	 Sleep(1000);
	 cout << ".";
	 Sleep(1000);
	 cout << ".";
	 Sleep(1000);
	 cout << ".";//theres probably a better way of doing this, but i just genuinelly dont care. Its 1:51 AM
	 jesus.question();
	 //jesus.link(); I want this to be the last used thing, i just dont know where itll end yet
 }
 else if(accpt== 'D' || accpt== 'd')
 {
	 cout << "denied\n";
	 cout << "shutting down";
	 Sleep(1000);
	 system("taskkill /IM sumfinn.exe /F");
	 
 }
}
void gMal::questions()
{
	system("cls");
}