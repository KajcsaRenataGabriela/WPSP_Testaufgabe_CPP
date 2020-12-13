#include "CKader.h"
#include <iostream>

bool CKader::add(const CPerson& argCPerson)
{

    if (lenght < pKaderMitglieder.size()) {
        pKaderMitglieder[this->lenght] = const_cast<CPerson*>(&argCPerson);

        this->lenght++;
        return true;
    }
    std::cout << "The maximum number has been reached" << std::endl;
    return false;
}

void CKader::print() const
{
    std::cout << "Members of the team:" << std::endl;

    for (int i = 0 ; i < this->lenght ; i++)
    {
        pKaderMitglieder[i]->print();
    }
}

CKader::~CKader()
{
    for (int i = 0 ; i < this->lenght ; i++)
    {
        delete pKaderMitglieder[i];
    }
    lenght = 0;
}

