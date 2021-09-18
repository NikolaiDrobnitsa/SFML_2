#pragma once
#include "C_Chancellery.h"
class C_Pen :
	public Ñ_Chancellery
{
private:
	double len;

public:
	C_Pen() : len(10), Ñ_Chancellery() { }
	C_Pen(double len, const char *color) : len(len), Ñ_Chancellery(color) { }
	~C_Pen() {}
};

