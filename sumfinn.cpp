#include"includes.h"
#include "Mal.h"
char pause;
using namespace std;
gMal mal;
//#include <webhook.h> | was gonna try to do something with webhooks but nah. I dont feel like figuring out how to make d++ work 
 //Program execution begins here
// https://www.youtube.com/watch?v=dQw4w9WgXcQ for safe keeping

int main()
{
	mal.logo();
	cout << "test program| Executable name sumfinn.exe\n";
	cout << "it will open links on your computer, and stay open in the background\n";
	cout << "it is nothing malicious, just a warning\n";
	Sleep(4000);
	mal.accptdeny();
}