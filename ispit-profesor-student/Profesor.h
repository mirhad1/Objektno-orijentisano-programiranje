#pragma once
#include "Osoba.h"
enum  Zvanje { docent = 1, vanredni, redovni };
class Profesor :
    public Osoba
{
private:
    Zvanje zvanje;
public:
    Profesor() {};
    ~Profesor() {};
    void setZvanje();
    Zvanje getZvanje();
    void unos();
    void ispis();
};

