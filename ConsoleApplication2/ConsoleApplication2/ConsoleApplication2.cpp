#include "pch.h"
#include <iostream>
using namespace std;
class Pen {
private:
	char* color;
	char* wear;
	char* type;
	int price;
public:
	Pen() {}
	Pen(char* _color, char* _wear, char* _type, int _price) {
		color = _color;
		wear = _wear;
		type = _type;
		price = _price;
	}
	void show() {
		cout << "Цвет:" << color << " \nизнос: " << wear << " \nтип " << type << "\n цена " << price;
	}
	
};
int main()
{
	setlocale(LC_ALL, "ru");
	Pen _Pen((char*)"black", (char*)"normal", (char*)"ballpoint", 25);
	_Pen.show();
	Pen *_pen = new Pen[4];
	for (int i = 0; i < 4; i++)
	{
		
	}
}
