#include "CashPlacanje.h"
#include <iostream>

using std::cout;
using std::cin;

CashPlacanje::CashPlacanje()
{
	this->vrNovac = novcanice;
}

void CashPlacanje::setVrstaNovca()
{
	int x;
	cout << "1. Novcanice\n";
	cout << "2. Kovanice\n";
	cout << "Unesite vrstu novca sa kojom placate: ";
	cin >> x;
	this->vrNovac = VrstaNovca(x);
}

VrstaNovca CashPlacanje::getVrstaNovca()
{
	return this->vrNovac;
}

void CashPlacanje::plati()
{
	cout << "Placeno kesom!\n";
}

std::istream& operator>>(std::istream& unos, CashPlacanje& cp)
{
	cp.setDatumPlacanja();
	cp.setIznos();
	cp.setVrstaNovca();
	return unos;
}
