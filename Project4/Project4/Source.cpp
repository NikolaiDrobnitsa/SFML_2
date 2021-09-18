#include <iostream>
#include "C_Pencil.h"
int main() {
	setlocale(LC_ALL, "rus");
	C_Pencil p(12, "black");
	p.draw("hello", std::cout);
}