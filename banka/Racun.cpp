#include "Racun.h"

Racun::Racun()
{
	this->datumTransakcije = new Datum[50];
	this->iznosTransakcije = new float[50];
	this->stanjeRacuna = new float[50];
	this->brTransakcije = 0;
	this->otvoren = false;
}

void Racun::setBrRacuna()
{
	std::cout << "Unesite broj racuna: ";
	std::cin >> brRacuna;
	std::cin.ignore();
}


void Racun::setLimit()
{
	std::cout << "Unesite iznos liita: ";
	std::cin >> this->limit;
	std::cin.ignore();
}

int Racun::getBrRacuna()
{
	return this->brRacuna;
}

float Racun::getLimit()
{
	return this->limit;
}

int Racun::getBrTransakcije()
{
	return this->brTransakcije;
}

bool Racun::getOtvoren()
{
	return this->otvoren;
}

void Racun::otvaranjeRacuna()
{
	if(this->getOtvoren())
	{
		std::cout << "Racun je vec otvoren!" << std::endl;
	}else
	{
		std::cout << "Otvaranje racuna"<<std::endl;
		this->korisnik.postaviKorisnika();
		this->setBrRacuna();
		std::cout << "Datum otvoranja racuna" << std::endl;
		this->datumTransakcije[this->getBrTransakcije()].setDatum();
		std::cout << "Unesite iznos prvobitne uplate:";
		std::cin >> this->iznosTransakcije[this->getBrTransakcije()];
		std::cin.ignore();
		this->stanjeRacuna[this->getBrTransakcije()] = this->iznosTransakcije[this -> getBrTransakcije()];
		this->setLimit();
		this->brTransakcije++;
		this->otvoren = true;
	}
}

void Racun::uplata()
{
	std::cout << "Unesite iznos za uplatu: ";
	std::cin >> this->iznosTransakcije[this - getBrTransakcije()];
	std::cin.ignore();
	this->stanjeRacuna[this->getBrTransakcije()] = this->stanjeRacuna[this->getBrTransakcije() - 1] + this->iznosTransakcije[this->getBrTransakcije()];
	std::cout << "Unesite datum uplate: ";
	this->datumTransakcije[this->getBrTransakcije()].setDatum();
	this->brTransakcije++;
}

void Racun::isplata()
{
	std::shared_ptr<float> x(new float());
	std::cout << "Unesite iznos za isplatu: ";
	std::cin >> *x;
	std::cin.ignore();
	if(-1*this->getLimit()<this->stanjeRacuna[this-getBrTransakcije()-1]-*x)
	{
		this->iznosTransakcije[this->getBrTransakcije() - 1] = *x * -1;

	}
}

float Racun::getStanjeRacuna()
{
	return 1.0;
}

void Racun::ispisTransakcija()
{
}
