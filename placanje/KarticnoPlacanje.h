#pragma once
#include "Placanje.h"
#include <iostream>

enum VrstaKartice { visa = 1, mastercard, maestro };

class KarticnoPlacanje :
    public Placanje
{
private:
    char brojKartice[17];
    VrstaKartice vrKartica;
public:
    KarticnoPlacanje();
    void setBrojKartice();
    void setvrstaKartice();
    void plati();
    char* getBrojKartice();
    VrstaKartice getVrstaKartice();
    friend std::istream& operator>> (std::istream& unos, KarticnoPlacanje& kp);


};

