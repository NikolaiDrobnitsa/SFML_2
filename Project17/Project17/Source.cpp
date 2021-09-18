#include <iostream>

char symbol(char symbol, int to ) {
	return symbol + to;

}

template <typename T> 
bool isln(T * arr, const int SIZE, T what)
{
	bool isln = false;
	for (int i = 0; i <= SIZE; i++)
	{
		if (arr [i]== what) {
			isln = true;
		}

	}
	return isln;

}

	int main() {
		const int SIZE = 10;
		int arr [SIZE];
		for (int i = 0; i <= SIZE; i++)
		{
			std::cout << "value_for [" << i << "]:\t";
			std::cin >> arr[i];

		}




		std::cout << "\n";
		isln(arr, SIZE, 10);
		return 0;
		system("pause");
	}
	

template<typename T>
void show_max(T * arr, const int size) {
	int max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j size; j++) {
			if (arr[i] < arr[j]) {
				max = j;
			}
		}
	}

	std::cout << max ;

}

int main()
{
	const int SIZE = 13;
	char arr[SIZE];

	input_arr(arr, SIZE);
	show max_arr(arr, SIZE);
	std::cout << "\n";
	std::cout << "\n";

	system("pause");
}





	