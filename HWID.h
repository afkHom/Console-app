#pragma once
#ifndef GHWID_H
//#define GHWID_H
#include <string>
class GHWID_H
{
public:
	std::string GetCpuId();
	std::string GetMotherboardSerial();
};

#endif // GHWID_H