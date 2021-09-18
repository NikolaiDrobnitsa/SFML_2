#include "pch.h"
#include <iostream>
//написавть програму тест на iq
using namespace std;
struct Mytest
{
	char *quest;
	int w;
};
struct test
{

};
void test_1() {
	Mytest test;
	test.test_1 = (char*)"Какое число не вписывается в этот ряд\n";
	test.options_1 = (char*)"1)4\n2)9\n3)2\n";
	test.answer_1;
	do
	{
		cout << test.test_1;
		cout << test.options_1;
		cin >> test.answer_1;
		if (test.answer_1 < 1 || test.answer_1>3) {
			cout << "Ошибка ввода!!!\n";
		}

	} while (test.answer_1 < 1 || test.answer_1>3);
}

int main()
{
	setlocale(LC_ALL, "ru");
	test_1();
}
