#pragma once
#include "Placanje.h"
#include <iostream>


enum VrstaNovca {novcanice = 1, kovanice};

class CashPlacanje :
    public Placanje
{
private:
    VrstaNovca vrNovac;
public:
    CashPlacanje();
    void setVrstaNovca();
    VrstaNovca getVrstaNovca();
    void plati();
    friend std::istream& operator>>(std::istream& unos, CashPlacanje& cp);
};

