#pragma once
#include "C_Chancellery.h"
class C_Pencil :
	public �_Chancellery
{
private:
	double len;
public:
	C_Pencil() : len(15), �_Chancellery() { }
	C_Pencil(double len, const char *color) : len(len), �_Chancellery(color) { }
	~C_Pencil() {}
};