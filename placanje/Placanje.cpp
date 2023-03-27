#include "Placanje.h"
#include <iostream>

using std::cout;
using std::cin;

Placanje::Placanje()
{
	this->iznos = 0.0;
}

void Placanje::setDatumPlacanja()
{
	this->datumPlacanja.setDan();
	this->datumPlacanja.setMjesec();
	this->datumPlacanja.setGodina();
}

void Placanje::setIznos()
{
	cout << "Unesite vas iznos isplate: ";
	cin >> this->iznos;
}

Datum Placanje::getDatumPlacanja()
{
	return this->datumPlacanja;
}

float Placanje::getIznos() {
	return this->iznos;
}


