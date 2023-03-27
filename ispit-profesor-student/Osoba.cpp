#include "Osoba.h"
using std::cin;
using std::cout;
Osoba::Osoba()
{
	this->ime = "ime";
	this->prezime = "Prezime";
}

void Osoba::setIme()
{
	cout << "Unesite ime:";
	std::getline(cin, this->ime);
}

void Osoba::setPrezime()
{
	cout << "Unesite prezime:";
	std::getline(cin, this->prezime);
}

string Osoba::getIme()
{
	return this->ime;
}

string Osoba::getPrezime()
{
	return this->prezime;
}
