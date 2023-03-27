#include "Marka.h"

#include <iostream>

Marka::Marka()
{
	strcpy_s(this->naziv, "Avto");
	strcpy_s(this->zemljaPorijekla, "Nigdjezemska");
}

void Marka::setNaziv()
{
	std::cout << "Unesite naziv marke: ";
	std::cin.getline(this->naziv, 30);
}

void Marka::setZemljaPorijekla()
{
	std::cout << "Unesite zemlju porijekla: ";
	std::cin.getline(this->zemljaPorijekla, 40);
}

char* Marka::getNaziv()
{
	return this->naziv;
}

char* Marka::getZemljaPorijekla()
{
	return this->zemljaPorijekla;
}
