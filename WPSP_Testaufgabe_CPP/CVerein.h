#pragma once
#include "CKader.h"
#include "CFuehrung.h"
#include <array>

class CVerein
{
private:
	unsigned int anzFuehrung = 0;
	static const unsigned int maxAnzFuehrung = 20;
	CKader* pMyKader;
	std::array<CFuehrung*, maxAnzFuehrung> fuehrungMitglieder;
	unsigned int lenght = 0;

public:
	bool add(const CFuehrung& argCFuehrung);
	bool add(const CKader& argCKader);
	void print() const;
};
