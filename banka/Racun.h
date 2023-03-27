#pragma once
#include "Datum.h"
#include "Korisnik.h"

class Racun
{
private:
	int brRacuna;
	Korisnik korisnik;
	Datum* datumTransakcije;
	float* iznosTransakcije;
	float* stanjeRacuna;
	float limit;
	int brTransakcije;
	bool otvoren;
public:
	Racun();
	void setBrRacuna();
	void setLimit();
	int getBrRacuna();
	float getLimit();
	int getBrTransakcije();
	bool getOtvoren();
	void otvaranjeRacuna();
	void uplata();
	void isplata();
	float getStanjeRacuna();
	void ispisTransakcija();
	~Racun() = default;
};

