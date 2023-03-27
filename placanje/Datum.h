#pragma once
class Datum
{
private:
	int dan, mjesec, godina;
public:
	Datum() {};
	Datum(int d, int m, int g);
	void setDan();
	void setMjesec();
	void setGodina();
	int getDan();
	int getMjesec();
	int getGodina();
};

