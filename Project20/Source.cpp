
#include <iostream>

int * func_array(int size) {
	return new int[size];
}
void func_array(int * arr, int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter value for [" << i << "] :\t";
		std::cin >> arr[i];
	}
}

void func_array(int * arr, int size) {
	for (int i = 0; i < size; i++)
	{

		std::cout << arr[i] << "\t" << &arr[i] << "\n";
	}

}
void func(int * arr, int size) {
	for (int i = 0; i < size; i++)
		arr[i]++;
}

int main()
{

	int length = 12;
	int * p_arr = func_array(length);

	if (p_arr != nullptr) {

		func_array(p_arr, length);
		system("cls");
		func_array(p_arr, length);

		delete p_arr;
	}
	else
		std::cout << "ERROR!\n";
	system("pause");
}
	


	



