#include "Kupac.h"
#include <iostream>
#include "KarticnoPlacanje.h"
#include "CashPlacanje.h"
using std::cout;
using std::cin;


Kupac::Kupac()
{
	this->id = 1;
	strcpy_s(this->ime, "Ahmed");
	strcpy_s(this->prezime, "Skulj");
}

void Kupac::setId()
{
	cout << "Unesite vas ID: ";
	cin >> this->id;
}

void Kupac::setIme()
{
	cout << "Unesite vase ime: ";
	cin.getline(this->ime, 15);
}

void Kupac::setPrezime()
{
	cout << "Unesite vase prezime: ";
	cin.getline(this->prezime, 20);
}

void Kupac::dodajPlacanje()
{
	int izbor;
	cout << "1. Karticno placanje\n";
	cout << "2. Cash placanje\n";
	cout << "Unesite vrstu placanja: ";
	cin >> izbor;

    std::shared_ptr<KarticnoPlacanje> tempK = std::make_shared<KarticnoPlacanje>();
	std::shared_ptr<CashPlacanje> tempC = std::make_shared<CashPlacanje>();

	switch (izbor)
	{
	case 1:
		cin >> *tempK;
		tempK->plati();
		this->placanje.push_back(*tempK);
		break;
	case 2:
		cin >> *tempC;
		tempC->plati();
		this->placanje.push_back(*tempC);
		break;
	default:
		break;
	}

	

}

int Kupac::getId()
{
	return this->id;
}

char* Kupac::getIme()
{
	return this->ime;
}

char* Kupac::getPrezime()
{
	return this->prezime;
}

vector<Placanje>& Kupac::getPlacanje()
{
	return this->placanje;
}

float Kupac::operator!()
{
	float ukupanIznos = 0;
	for (int i = 0; i < this->placanje.size(); i++) {
		ukupanIznos += this->placanje[i].getIznos();
	}
	return ukupanIznos;
}




