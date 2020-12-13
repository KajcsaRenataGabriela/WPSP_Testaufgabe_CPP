#pragma once
#include "CPerson.h"
#include <string>

class CTrainer : public CPerson
{
private:
	unsigned int lizenzStufe = 0;

public:
	CTrainer(std::string name, std::string vorname, unsigned int alter);
	CTrainer() = default;

	void setLizenzStufe(unsigned int argLizenzStufe);

	void print() const override;
};