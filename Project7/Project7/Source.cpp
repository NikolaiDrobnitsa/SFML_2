#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	char k;
	std::cin >> k;
	

	const int SIZE_ROW = 20;
	const int SIZE_COLUMN = 40;

	int vector_y = 10, vector_x = 20;

	char array_2d[SIZE_ROW][SIZE_COLUMN];



	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_COLUMN; j++)
		{
			array_2d[i][j] = '*';
		}
	}

	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_COLUMN; j++)
		{
			if (i == vector_y && j == vector_x) {
				std::cout << "Клавиша  k: " << k << "\n" ;
			}
			else {
				std::cout << array_2d[i][j];
			}
		}
		while (true)
		{
			std::cout << array_2d;
			std::cout <<"Клавиша k " << k << "\n";
			
		}

		std::cout << "\n";
	}



	



}