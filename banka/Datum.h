#pragma once
#include <iostream>

class Datum
{
private:
	char datum[11];
public:
	Datum();
	void setDatum();
	char* getDatum();
	~Datum()=default;

};

