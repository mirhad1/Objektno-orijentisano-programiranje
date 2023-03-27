#pragma once
#include<iostream>
#include<string>
using std::string;
class Osoba
{private:
public:
	string ime, prezime;
	Osoba();
	~Osoba() {};
	void setIme();
	void setPrezime();
	string getIme();
	string getPrezime();
	virtual void ispis() = 0;
};

