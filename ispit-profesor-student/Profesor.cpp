#include "Profesor.h"

void Profesor::setZvanje()
{
    int broj;
    do {
        std::cout << "Unesite zvanje profesora:(1-3)\n\t1.docent\n\t2.vanredni\n\t3.redovni";
        std:: cin >> broj;


    } while (broj < 1 || broj>3);
    this->zvanje = Zvanje(broj);
}

Zvanje Profesor::getZvanje()
{
    return this->zvanje;
}

void Profesor::unos()
{
    std::cout << ":Profesor:\n";
    this->setIme();
    this->setPrezime();
    this->setZvanje();
}

void Profesor::ispis()
{
    std::cout << this->getIme() << " " << this->getPrezime() << " - " << this->getZvanje()<<"\n";
}
