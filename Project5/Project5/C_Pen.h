#pragma once
#include "C_Chancellery.h"
class C_Pen :
	public �_Chancellery
{
private:
	double len;

public:
	C_Pen() : len(10), �_Chancellery() { }
	C_Pen(double len, const char *color) : len(len), �_Chancellery(color) { }
	~C_Pen() {}
};

