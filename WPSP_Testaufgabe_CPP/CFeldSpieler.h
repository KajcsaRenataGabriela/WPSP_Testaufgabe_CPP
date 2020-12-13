#pragma once
#include "CSpieler.h"

class CFeldSpieler : public CSpieler
{
public:
	enum e_starkerFuss { unKnown, links, rechts, gleich };

	CFeldSpieler(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer);

	void setStarkerFuss(e_starkerFuss argStarkerFuss);
	void setVerteidigung(unsigned int argVerteidigung);
	void setBallBeherrschung(unsigned int argBallBeherrschung);
	void setSchussKraft(unsigned int argSchussKraft);
	void setSchussGenauigkeit(unsigned int argSchussGenauigkeit);

	void print() const override;

private:
	e_starkerFuss starkerFuss = unKnown;
	unsigned int verteidigung = 0;
	unsigned int ballBeherrschung = 0;
	unsigned int schussKraft = 0;
	unsigned int schussGenauigkeit = 0;
};
