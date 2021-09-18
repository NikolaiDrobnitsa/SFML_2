#pragma once
#include "C_Chancellery.h"
class C_Pencil :
	public Ñ_Chancellery
{
private:
	double len;
public:
	C_Pencil() : len(15), Ñ_Chancellery() { }
	C_Pencil(double len, const char *color) : len(len), Ñ_Chancellery(color) { }
	~C_Pencil() {}
};