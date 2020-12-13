#pragma once
#include "CPerson.h"
#include <array>

class CKader{

private:
	unsigned int anzKader = 0;
	static const unsigned int maxAnzKader = 50;

	std::array<CPerson*, maxAnzKader> pKaderMitglieder;
	unsigned int lenght = 0;

public:
	CKader() {} //default constructor
	bool add(const CPerson& argCPerson);
	void print() const;
	~CKader(); //desctructor
};