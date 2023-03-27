#pragma once
#include "Auto.h"
#include "Datum.h"

enum Brzina { rikverc = -1, ler, prva, druga, treca, cetvrta, peta, sesta };
enum Stanje{ugasen=0, upaljen};
class MojeAuto
{
private:
	Auto mojeAuto;
	Datum datumRegistracije;
	char registracija[20];
	Brzina brzina;
	Stanje stanje;
public:
	MojeAuto();
	void setMojeAuto();
	void setDatumRegistracije();
	void setRegistracija();
	Auto getMojeAuto();
	Datum getDatumRegistracije();
	char* getRegistracija();
	Brzina getBrzina();
	Stanje getStanje();

	std::string ispisBrzina();
	std::string ispisStanje();

	void unosMogAuta();
	void ispisMogAuta();
	void trenutnaBrzina();
	void prebaciRikverc();
	void prebaciPrvaBrzina();
	void prebaciVecuBrzinu();
	void prebaciManjuBrzinu();
	void promjeniStanje();

};

