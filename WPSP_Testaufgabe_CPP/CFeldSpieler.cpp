#include "CFeldSpieler.h"
#include <iostream>

CFeldSpieler::CFeldSpieler(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
}

void CFeldSpieler::setStarkerFuss(e_starkerFuss argStarkerFuss)
{
	this->starkerFuss = argStarkerFuss;
}

void CFeldSpieler::setVerteidigung(unsigned int argVerteidigung)
{
	this->verteidigung = argVerteidigung;
}

void CFeldSpieler::setBallBeherrschung(unsigned int argBallBeherrschung)
{
	this->ballBeherrschung = argBallBeherrschung;
}

void CFeldSpieler::setSchussKraft(unsigned int argSchussKraft)
{
	this->schussKraft = argSchussKraft;
}

void CFeldSpieler::setSchussGenauigkeit(unsigned int argSchussGenauigkeit)
{
	this->schussGenauigkeit = argSchussGenauigkeit;
}

void CFeldSpieler::print() const
{
	// torwart, abwehr, mittelfeld, sturm
	switch (position)
	{
	case torwart:
		std::cout << "Goalkeeper ";
		break;
	case abwehr:
		std::cout << "Defence field player ";
		break;
	case mittelfeld:
		std::cout << "Middle field player ";
		break;
	case sturm:
		std::cout << "Attacking field player ";
		break;
	}

	std::cout << name << " " << vorname
		<< " is " << alter << " years old. "
		<< "Strong foot: ";
	// unKnown, links, rechts, gleich
		switch (starkerFuss)
		{
		case unKnown:
			std::cout << "unknown. ";
			break;
		case links:
			std::cout << "left. ";
			break;
		case rechts:
			std::cout << "right. ";
			break;
		case gleich:
			std::cout << "both. ";
			break;
		}
		
	std::cout << "Defense: " << verteidigung << ". "
		<< "Ball control: " << ballBeherrschung << ". "
		<< "Shot power: " << schussKraft << ". " 
		<< "Shot accuracy: " << schussGenauigkeit << "."
		<< std::endl;
}