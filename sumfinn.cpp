#include <iostream>
#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include "Mal.h"
gMal mal;
using namespace std;
//#include <webhook.h> | was gonna try to do something with webhooks but nah. I dont feel like figuring out how to make d++ work 
#define _WIN32_WINNT 0x0500
// sumfinn.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://www.youtube.com/watch?v=dQw4w9WgXcQ for safe keeping

int main()
{

// text displayed to the user
 Sleep(500);
 std::cout << "Hopefully this works\n";
 Sleep(600);
 std::cout << "If you can read this it is already too late\nyou cannot run ";
 // text displayed to the user
 // User input
 mal.uint();
 // User input
 // link openererer
 mal.mal();
 // link openererer
 //theres no point in making them their own seperate thing so im just going to leave these here
  MessageBoxA(NULL, "Why? Fuck you. Thats why.", "The program is open in the background.", MB_OK | MB_ICONHAND);
  system("pause");
 //it's just easier, and is probably going to confuse retards who come across this if they do. 
}




 









