#include "pch.h"
#include "С_Dish.h"

С_Dish::С_Dish() {
	cout << "Блюдо";
	S_PFC PFC;
	PFC.carbohydrates = 8.2f;
	PFC.fat = 10.3f;
	PFC.proteins = 1.7f;
	*this->_PFC = PFC;
	*this->_type_dishes = E_Type_Dishes::TYPE_DISH_FIRSTLY_SOUP;
}
С_Dish::С_Dish(char* _name, float _price, float _calories,float carbohydrates, float fat, float proteins,E_Type_Dishes type_dishes) {
	this->_name = _name;

	this->_price = _price;
	this->_calories = _calories;
	
	*this->_PFC.carbohydrates = carbohydrates;
	*this->_PFC.fat = fat;
	*this->_PFC.proteins = proteins;

	this->_type_dishes = type_dishes;
}
const char * С_Dish::getDishType()
{
	switch (this->_type_dishes)
	{
	case E_Type_Dishes::TYPE_DISH_FIRSTLY_SOUP:
		return "Первое блюдо суп";
	case E_Type_Dishes::TYPE_DISH_SECONDLY_POTATO:
		return "Второе блюдо картошка";
	case E_Type_Dishes::TYPE_DISH_SECONDLY_СHOCOLATE:
		return "Третье блюдо шоколад";
	}
}
void С_Dish::show() {
	cout << "Название:" << this->_name << "\tЦена:" << this->_price << "\t\tКалорий:" << this->_calories;
	cout << "\nУглеводов:" << this->_PFC.carbohydrates << "\tЖиры:" << this->_PFC.fat << "\tБелки:"<<this->_PFC.proteins<<"\n";
	cout <<"\nТип блюда:" <<this->getDishType()<<"\n";
}
char* С_Dish::getName() {
	return this->_name;
}
float С_Dish::getPrice() {
	return this->_price;
}
float С_Dish::getCalories() {
	return this->_calories;
}



С_Dish::~С_Dish() {

}