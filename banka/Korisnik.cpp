#include "Korisnik.h"
#include<iostream>
Korisnik::Korisnik()
{
	strcpy_s(this->ime, "Niko");
	strcpy_s(this->prezime, "Nikic");
	strcpy_s(this->adresa, "Tu i tamo");
	strcpy_s(this->grad, "Ovamo");
}

void Korisnik::setIme()
{
	std::cout << "Unesite ime korisnika: ";
	std::cin.getline(this->ime, 20);
}

void Korisnik::setPrezime()
{
	std::cout << "Unesite prezime korisnika: ";
	std::cin.getline(this->prezime, 30);
}

void Korisnik::setAdresa()
{
	std::cout << "Unesite adresu korisnika: ";
	std::cin.getline(this->adresa, 50);
}

void Korisnik::setGrad()
{
	std::cout << "Unesite grad korisnika: ";
	std::cin.getline(this->grad, 30);
}

char* Korisnik::getIme()
{
	return this->ime;
}

char* Korisnik::getPrezime()
{
	return this->prezime;
}

char* Korisnik::getAdresa()
{
	return this->adresa;
}

char* Korisnik::getGrad()
{
	return this->grad;
}

void Korisnik::postaviKorisnika()
{
	std::cout << "Unos korisnika" << std::endl;
	this->setIme();
	this->setPrezime();
	this->setAdresa();
	this->setGrad();
}
