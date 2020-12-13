#include "CFuehrung.h"
#include <iostream>

CFuehrung::CFuehrung(std::string name, std::string vorname, unsigned int alter, e_aufgabe aufgabe)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->aufgabe = aufgabe;
}

void CFuehrung::print() const
{
	switch (aufgabe)
	{
	case praesident:
		std::cout << "President ";
		break;
	case vorstand:
		std::cout << "Board member ";
		break;
	case sportdirektor:
		std::cout << "Sport director ";
		break;
	}
	std::cout << vorname + " " + name + " is " << alter << " years old." << std::endl;
}