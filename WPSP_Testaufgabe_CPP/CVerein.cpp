#include "CVerein.h"
#include <iostream>

bool CVerein::add(const CFuehrung& arg)
{
    if (lenght < fuehrungMitglieder.size()) {
        fuehrungMitglieder[this->lenght] = const_cast<CFuehrung*>(&arg);
        this->lenght++;
        return true;
    }
    return false;
}

bool CVerein::add(const CKader& arg)
{
    if (this->pMyKader == nullptr) { // nullptr = does not point to an object
        this->pMyKader = const_cast<CKader*>(&arg);
        return true;
    }
    return false;
}

void CVerein::print() const
{
    if (this->pMyKader) {
        this->pMyKader->print();
    }

    std::cout << "Leadership members: " 
        << std::endl;

    for (int i = 0; i < this->lenght; i++)
    {
        fuehrungMitglieder[i]->print();
    }
}