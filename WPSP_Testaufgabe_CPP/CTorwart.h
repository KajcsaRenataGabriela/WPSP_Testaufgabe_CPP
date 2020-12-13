#pragma once
#include "CSpieler.h"

class CTorwart : public CSpieler {

	unsigned int strafRaumBeherrschung = 0;
	unsigned int linienQualitaet = 0;
	unsigned int abwehrKommunikation = 0;

public:
	CTorwart(std::string name, std::string vorname, unsigned int alter, e_position  position, unsigned int nummer);

	void setStrafRaumBeherrschung(unsigned int argStrafRaumBeherrschung);
	void setLinienQualitaet(unsigned int argLinienQualitaet);
	void setAbwehrKommunikation(unsigned int argAbwehrKommunikation);

	void print() const;
};