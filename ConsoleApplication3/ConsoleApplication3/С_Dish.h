#pragma once
#include "S_PFC.h"
#include "E_Type_Dishes.h"
class �_Dish {
private:
	S_PFC* _PFC;
	char* _name;

	float _price;
	float _calories;
	E_Type_Dishes* _type_dishes;
public:
	�_Dish();

	�_Dish(char* _name, float _price, float _calories, float carbohydrates, float fat, float proteins,E_Type_Dishes type_dishes);

	void show();

	char* getName();

	float getPrice();
	float getCalories();
	const char* getDishType();
	~�_Dish();
};