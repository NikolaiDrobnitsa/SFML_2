#include "pch.h"
#include "�_Dish.h"

int main()
{
	setlocale(LC_ALL, "ru");
	�_Dish _Dish((char*)"��������", 35 ,130,8.2,10.3,1.7,E_Type_Dishes::TYPE_DISH_FIRSTLY_SOUP);

	_Dish.show();

	cout << "\n��������: " << _Dish.getName() << "\n";
	cout << "����: " << _Dish.getPrice() << "\n";
	cout << "�������: " << _Dish.getCalories() << "\n";

}

