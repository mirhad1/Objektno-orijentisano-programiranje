#pragma once
#include "Datum.h"
class Placanje
{
protected:
	Datum datumPlacanja;
	float iznos;
public:
	Placanje();
	void setDatumPlacanja();
	void setIznos();
	virtual void plati() {};
	Datum getDatumPlacanja();
	float getIznos();
};

