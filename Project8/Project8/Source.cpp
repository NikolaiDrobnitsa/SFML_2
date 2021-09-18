#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
//void sum_number(int& num_1, int& num_2) {
//	std::cout << "Первое число :" << num_1 << "\n";
//	std::cout << "Второе число :" << num_2 << "\n";
//
//	std::cout << "Сума чисел = " << num_1 + num_2 << "\n";
//}
//int main() {
//	int num_1 = 0, num_2 = 0;
//	std::cout << "enter first num:";
//	std::cin >> num_1;
//	std::cout << "enter second num:";
//	std::cin >> num_2;
//	std::thread sum(sum_number, std::ref(num_1), std::ref(num_2));
//	sum.join();
//}
std::mutex my_mutex;
void my_stopwatch(){
	int hour = 0, minutes = 0, second = 0;
	my_mutex.lock();
	while (true)
	{
		system("cls");
		second = second % 60;
		minutes = second % 60;
		std::cout <<"\t"<<hour << ":" << minutes << ":" << second;
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
	my_mutex.unlock();
}


int main() {
	std::thread stopwatch(my_stopwatch);
	stopwatch.join();
}