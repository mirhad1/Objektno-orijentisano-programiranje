#pragma once
#include<iostream>
#include <string>
#include "Profesor.h"
#include "Student.h"
#include <vector>
using std::string;
class Ispit
{private:
	string naziv, datumIspita;
	Profesor profesor;
	std::vector<Student>studenti;
	std::vector<int>ocjena;
public:
	Ispit() {};
	~Ispit() {};
	void setNaziv();
	void setDatumIspita();
	void setProfesor();
	void setStudenti();
	void setOcjene();
	string getNaziv();
	string getDatumIspita();
	Profesor getProfesor();
	std::vector<Student>& getStudenti();
	std::vector<int> getOcjene();
	friend float operator!(Ispit& i);

};

