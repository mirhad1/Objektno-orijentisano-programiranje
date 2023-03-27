#include "Ispit.h"
#include<iostream>
#include<memory>
void Ispit::setNaziv()
{
	std::cout << "Unesite naziv ispita:";
	getline(std::cin, this->naziv);
}

void Ispit::setDatumIspita()
{
	std::cout << "Unesite datum ispita:";
	getline(std::cin, this->datumIspita);
}

void Ispit::setProfesor()
{
	this->profesor.unos();
}

void Ispit::setStudenti()
{
	Student* temp=new Student();
	std::cin >> *temp;
	this->studenti.push_back(*temp);
	delete temp;
}

void Ispit::setOcjene()
{
	int ocjena;
	do {
		std::cout << "Unesite ocjenu:";
		std::cin >> ocjena;
		std::cin.ignore();
	} while (ocjena <1 || ocjena>5);
	this->ocjena.push_back(ocjena);

}

string Ispit::getNaziv()
{
	return this->naziv;
}

string Ispit::getDatumIspita()
{
	return this->datumIspita;
}

Profesor Ispit::getProfesor()
{
	return this->profesor;
}

std::vector<Student>& Ispit::getStudenti()
{
	return this->studenti;
}

std::vector<int> Ispit::getOcjene()
{
	return this->ocjena;
}

float operator!(Ispit& i)
{
	float rez = 0;
	for (int j = 0; j < i.ocjena.size(); j++) {
		rez += i.ocjena[j];
	}
	rez /= float(i.ocjena.size());
	return rez;
}
