#include <iostream>
//#include "Ñ_Chancellery.h"
#include "C_Pencil.h"
#include "C_Pen_auto.h"

int main() {
	setlocale(LC_ALL, "rus");
	/*Ñ_Chancellery c;
	c.draw("hello", std::cout);*/

	//C_Pencil p;
	C_Pencil p(12, "black");
	p.draw("hello", std::cout);
	/*C_Pen_auto a(10,"black")
	a.draw("pen_auto", std::cout);*/
	return 0;
}