#include "pch.h"
#include "С_Dish.h"

int main()
{
	setlocale(LC_ALL, "ru");
	С_Dish _Dish((char*)"Винегрет", 35 ,130,8.2,10.3,1.7,E_Type_Dishes::TYPE_DISH_FIRSTLY_SOUP);

	_Dish.show();

	cout << "\nНазвание: " << _Dish.getName() << "\n";
	cout << "Цену: " << _Dish.getPrice() << "\n";
	cout << "Калории: " << _Dish.getCalories() << "\n";

}

