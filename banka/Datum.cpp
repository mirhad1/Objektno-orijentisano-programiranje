#include "Datum.h"

Datum::Datum()
{
	strcpy_s(this->datum, "1.1.1900.");
}

void Datum::setDatum()
{
	std::cout << "Unesite datum: ";
	std::cin.getline(this->datum, 11);
}

char* Datum::getDatum()
{
	return this->datum;
}
