#include "Datum.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Datum::Datum(int d, int m, int g)
{
	try {
		if (d > 31 || m > 12) {
			throw "Pogresan format datuma!";
		}
		else {
			this->dan = d;
			this->mjesec = m;
			this->godina = g;
		}
	}
	catch (const char* Greska) {
		cout << Greska << endl;
	}
}

void Datum::setDan()
{
	cout << "Unesite dan isplate: ";
	cin >> this->dan;
}

void Datum::setMjesec()
{
	cout << "Unesite mjesec isplate: ";
	cin >> this->mjesec;
}

void Datum::setGodina()
{
	cout << "Unesite godinu isplate: ";
	cin >> this->godina;
}

int Datum::getDan()
{
	return this->dan;
}

int Datum::getMjesec()
{
	return this->mjesec;
}

int Datum::getGodina()
{
	return this->godina;
}
