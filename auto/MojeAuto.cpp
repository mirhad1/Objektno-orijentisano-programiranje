#include "MojeAuto.h"

#include <iostream>

MojeAuto::MojeAuto()
{
	strcpy_s(this->registracija, "000-0-000");
	this->brzina = ler;
	this->stanje = ugasen;
}

void MojeAuto::setMojeAuto()
{
	this->mojeAuto.postaviAuto();
}

void MojeAuto::setDatumRegistracije()
{
	std::cout << "Unos datuma registracije: \n";
	this->datumRegistracije.postaviDatum();
}

void MojeAuto::setRegistracija()
{
	std::cout << "Unesite registraciju vozila: ";
	std::cin.getline(this->registracija, 20);
}

Auto MojeAuto::getMojeAuto()
{
	return this->mojeAuto;
}

Datum MojeAuto::getDatumRegistracije()
{
	return this->datumRegistracije;
}

char* MojeAuto::getRegistracija()
{
	return this->registracija;
}

Brzina MojeAuto::getBrzina()
{
	return this->brzina;
}

Stanje MojeAuto::getStanje()
{
	return this->stanje;
}

std::string MojeAuto::ispisBrzina()
{
	switch(this->brzina)
	{
	case rikverc:
		return "Rikverc.";
	case ler:
		return "Ler.";
	case prva:
		return "Prva.";
	case druga:
		return "Druga.";
	case treca:
		return "Treca.";
	case cetvrta:
		return "Cetvrta.";
	case peta:
		return "Peta.";
	case sesta:
		return "Sesta.";
	}
}

std::string MojeAuto::ispisStanje()
{
	switch(this->stanje)
	{
	case ugasen:
		return "Ugasen.";
	case upaljen:
		return "Upaljen.";
	}
}

void MojeAuto::unosMogAuta()
{
	this->setMojeAuto();
	this->setRegistracija();
	this->setDatumRegistracije();
}

void MojeAuto::ispisMogAuta()
{
	this->mojeAuto.ispisAuta();
	std::cout << "Registracija: " << this->getRegistracija() << ", registrovano dana " << this->getDatumRegistracije().getDatum() << ".\n";
	std::cout << "Trenutno stanje: "<<this->ispisStanje()<<std::endl;
	std::cout << "Brzina: " << this->ispisBrzina() << std::endl;
}

void MojeAuto::trenutnaBrzina()
{
}

void MojeAuto::prebaciRikverc()
{
}

void MojeAuto::prebaciPrvaBrzina()
{
}

void MojeAuto::prebaciVecuBrzinu()
{
}

void MojeAuto::prebaciManjuBrzinu()
{
}

void MojeAuto::promjeniStanje()
{
}
