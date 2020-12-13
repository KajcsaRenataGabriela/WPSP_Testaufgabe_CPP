#pragma once
#include <string>

class CPerson
{
protected:
	std::string name = " ";
	std::string vorname = " ";
	unsigned int alter = 0;

public:
	virtual void print() const = 0;
};