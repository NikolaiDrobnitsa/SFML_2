#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int num;
	std::cout << "������� ����� ����� ������� ������� ��������� ��� ������� �����\n";
	std::cout << "������� ������� ��������� ������� �����:\n";

	for (int i = 1; i <= 10; i++) {
		std::cout << i << "*" << i << " = ";
		if (i == 9) {
			i++;
			i == 1;
			std::cout << "\n";
		}

	}

	system("pause");
	_getch();
}