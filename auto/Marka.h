#pragma once
class Marka
{
private:
	char naziv[30], zemljaPorijekla[40];
public:
	Marka();
	void setNaziv();
	void setZemljaPorijekla();
	char* getNaziv();
	char* getZemljaPorijekla();
	~Marka() {};
};

