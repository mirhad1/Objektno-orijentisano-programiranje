#include "KarticnoPlacanje.h"
#include <iostream>

using std::cout;
using std::cin;

KarticnoPlacanje::KarticnoPlacanje()
{
	strcpy_s(this->brojKartice, "1111222233334444");
	this->vrKartica = visa;
}

void KarticnoPlacanje::setBrojKartice()
{
	do {
		cout << "Unesite broj kartice: ";
		cin.getline(this->brojKartice, 17);
		if (strlen(this->brojKartice) != 16) {
			cout << "Greska! Unesite ispravan format kartice! " << std::endl;
		}
	} while (strlen(this->brojKartice) != 16);
}

void KarticnoPlacanje::setvrstaKartice()
{
	int x;
	cout << "1. Visa\n";
	cout << "2. MasterCard\n";
	cout << "3. Maestro\n";
	cout << "Unesite vrstu kartice: ";
	cin >> x;
	this->vrKartica = VrstaKartice(x);
}

void KarticnoPlacanje::plati()
{
	cout << "Placeno karticom!\n";
}

char* KarticnoPlacanje::getBrojKartice()
{
	return this->brojKartice;
}

VrstaKartice KarticnoPlacanje::getVrstaKartice()
{
	return this->vrKartica;
}

std::istream& operator>>(std::istream& unos, KarticnoPlacanje& kp)
{
	kp.setDatumPlacanja();
	kp.setIznos();
	kp.setBrojKartice();
	kp.setvrstaKartice();
	return unos;
}
