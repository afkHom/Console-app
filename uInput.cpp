#include "uInput.h"
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
#include <stdlib.h>

void uInput::uint()
{
	bool string1[20];
	std::cout << "\n ";
	for (int i = 0; i < 1; i++)
	{
		std::cin >> string1[i];
	}
	int counter = 0;
	int length;
	length = sizeof(string1) / sizeof(string1[0]);
	std::cout << length;
}

