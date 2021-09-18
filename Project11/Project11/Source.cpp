#include <iostream>


void sq(int w, int e) {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < e; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}




}



int main()
{
	setlocale(LC_ALL, "rus");


	int a = 0;
	int b = 0;
	std::cout << "¬ведите шырину квадрата:\n";
	std::cin >> a;
	std::cout << "¬ведите высоту квадрата:\n";
	std::cin >> b;

	sq(a, b);



	system("pause");
}