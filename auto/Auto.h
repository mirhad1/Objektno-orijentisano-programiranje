#pragma once
#include "Marka.h"

class Auto
{
private:
	Marka marka;
	char tip[30], gorivo[10];
	int godinaProizvodnje, brojBrzina;
public:
	Auto();
	void setMarka();
	void setTip();
	void setGorivo();
	void setGodinaProizvodnje();
	void setBrojBrzina();
	Marka getMarka();
	char* getTip();
	char* getGorivo();
	int getGodinaProizvodnje();
	int getBrojBrzina();
	void postaviAuto();
	void ispisAuta();
	~Auto(){};
};

