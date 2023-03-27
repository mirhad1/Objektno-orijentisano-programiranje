#pragma once
#include "Placanje.h"
#include <vector>

using std::vector;

class Kupac
{
private:
	int id;
	char ime[15];
	char prezime[20];
	vector<Placanje> placanje;
public:
	Kupac();
	void setId();
	void setIme();
	void setPrezime();
	void dodajPlacanje();
	int getId();
	char* getIme();
	char* getPrezime();
	vector<Placanje>& getPlacanje();
	float operator!();
	
};

