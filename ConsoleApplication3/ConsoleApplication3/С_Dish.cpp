#include "pch.h"
#include "�_Dish.h"

�_Dish::�_Dish() {
	cout << "�����";
	S_PFC PFC;
	PFC.carbohydrates = 8.2f;
	PFC.fat = 10.3f;
	PFC.proteins = 1.7f;
	*this->_PFC = PFC;
	*this->_type_dishes = E_Type_Dishes::TYPE_DISH_FIRSTLY_SOUP;
}
�_Dish::�_Dish(char* _name, float _price, float _calories,float carbohydrates, float fat, float proteins,E_Type_Dishes type_dishes) {
	this->_name = _name;

	this->_price = _price;
	this->_calories = _calories;
	
	*this->_PFC.carbohydrates = carbohydrates;
	*this->_PFC.fat = fat;
	*this->_PFC.proteins = proteins;

	this->_type_dishes = type_dishes;
}
const char * �_Dish::getDishType()
{
	switch (this->_type_dishes)
	{
	case E_Type_Dishes::TYPE_DISH_FIRSTLY_SOUP:
		return "������ ����� ���";
	case E_Type_Dishes::TYPE_DISH_SECONDLY_POTATO:
		return "������ ����� ��������";
	case E_Type_Dishes::TYPE_DISH_SECONDLY_�HOCOLATE:
		return "������ ����� �������";
	}
}
void �_Dish::show() {
	cout << "��������:" << this->_name << "\t����:" << this->_price << "\t\t�������:" << this->_calories;
	cout << "\n���������:" << this->_PFC.carbohydrates << "\t����:" << this->_PFC.fat << "\t�����:"<<this->_PFC.proteins<<"\n";
	cout <<"\n��� �����:" <<this->getDishType()<<"\n";
}
char* �_Dish::getName() {
	return this->_name;
}
float �_Dish::getPrice() {
	return this->_price;
}
float �_Dish::getCalories() {
	return this->_calories;
}



�_Dish::~�_Dish() {

}