#pragma once
#include "CSpieler.h"
#include <string>

class CFuehrung : public CSpieler
{
public:
	enum e_aufgabe { praesident, vorstand, sportdirektor };

	CFuehrung(std::string name, std::string vorname, unsigned int alter, e_aufgabe aufgabe);

	void print() const;

private:
	e_aufgabe aufgabe = vorstand;
};