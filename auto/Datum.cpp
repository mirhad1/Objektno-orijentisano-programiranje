#include "Datum.h"

#include <iomanip>
#include <iostream>

Datum::Datum()
{
	this->dan = 1;
	this->mjesec = 1;
	this->godina = 1900;
}

void Datum::setDan()
{
	switch(this->mjesec)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		do
		{
			std::cout << "Unesite dan: ";
			std::cin >> this->dan;
			if(this->dan>31)
			{
				std::cout << "Greska" << this->mjesec<<". ima samo 31 dan!\n";
			}else if(this->dan<1)
			{
				std::cout << "Greska dan mora biti pozitivan broj!\n";
			}
		} while (this-> dan < 0 || this->dan>31);
		break;
	case 4: case 6: case 9: case 11:
		do
		{
			std::cout << "Unesite dan: ";
			std::cin >> this->dan;
			if (this->dan > 30)
			{
				std::cout << "Greska" << this->mjesec << ". ima samo 30 dan!\n";
			}
			else if (this->dan < 1)
			{
				std::cout << "Greska dan mora biti pozitivan broj!\n";
			}
		} while (this-> dan < 0 || this->dan>30);
		break;
	case 2:
		if(this->godina%4==0)
		{
			do
			{
				std::cout << "Unesite dan: ";
				std::cin >> this->dan;
				if (this->dan > 29)
				{
					std::cout << "Greska" << this->mjesec << ". ima samo 29 dana!\n";
				}
				else if (this->dan < 1)
				{
					std::cout << "Greska dan mora biti pozitivan broj!\n";
				}
			} while (this-> dan < 0 || this->dan>29);
			break;
		}else
		{
			do
			{
				std::cout << "Unesite dan: ";
				std::cin >> this->dan;
				if (this->dan > 28)
				{
					std::cout << "Greska" << this->mjesec << ". ima samo 28 dana!\n";
				}
				else if (this->dan < 1)
				{
					std::cout << "Greska dan mora biti pozitivan broj!\n";
				}
			} while (this-> dan < 0 || this->dan>28);
			break;
	default:
		std::cout << "Greska pogresan mjesec!\n";
		}
	}
}

void Datum::setMjesec()
{
	do
	{
		std::cout << "Unesite mjesec: ";
		std::cin >> this->mjesec;
		if(this->mjesec<1 || this->mjesec>12)
		{
			std::cout << "Greska pogresno unesen mjesec\n";
		}
	} while (mjesec < 1 || this->mjesec>12);
}

void Datum::setGodina()
{
	do
	{
		std::cout << "Unesite godinu: ";
		std::cin >> this->godina;
		if (this->godina<1900)
		{
			std::cout << "Greska pogresno unesena godina\n";
		}
	} while (this->godina < 1900);
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

void Datum::postaviDatum()
{
	std::cout << "Unos datuma\n";
	this->setGodina();
	this->setMjesec();
	this->setDan();
}

void Datum::ispisDatum()
{
	std::cout << std::setw(2) << std::setfill('0') << this->getDan() << "." << std::setw(2) << std::setfill('0') << this - getMjesec() << "." << this->getGodina();
}

std::string Datum::getDatum()
{
	std::string stringDan, stringMjesec;
	if(this->dan<10)
	{
		stringDan = "0" + std::to_string(this->dan);
	}else
	{
		stringDan = std::to_string(this->dan);
	}
	if (this->mjesec < 10)
	{
		stringMjesec = "0" + std::to_string(this->mjesec);
	}
	else
	{
		stringMjesec = std::to_string(this->mjesec);
	}
	std::string rez = stringDan + "." + stringMjesec + "." + std::to_string(this->godina) + "";
	rez += "(" + this->nazivDana() + ")";
	return rez;
}

std::string Datum::nazivDana()
{
	int m = this->mjesec;
	if(m==1){
		m = 11;
	}else if(m==2){
		m = 12;
	}else{
		m -= 2;
	}
	int d = this->dan;
	int g = this->godina;
	int D = this->godina % 100;
	int C = this->godina / 100;
	int f = d + (13 * m - 1) / 5 + D + D / 4 + C / 4 - 2 * C;
	if(f-0)
	{
		int temp = f;
		do
		{
			if(std::abs(temp) % 7 != 0)
			{
				temp--;
			}
		} while (std::abs(temp) % 7 != 0);
		f = std::abs(temp) - std::abs(f);
	}else
	{
		f %= 7; //f=f%7;
	}
	switch(f)
	{
	case 0:
		return "Nedjelja";
		break;
	case 1:
		return "Ponedjeljak";
	case 2:
		return "Utorak";
	case 3:
		return "Srijeda";
	case 4:
		return "Cetvrtak";
	case 5:
		return "Petak";
	case 6:
		return "Subota";
	default:
		return "Ponedjeljak";
	}
}
