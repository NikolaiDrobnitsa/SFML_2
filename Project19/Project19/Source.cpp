#include <iostream>
#include <ostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
class isOdd {
public:
	bool operator ()(string x) {
		return x.length() == 5;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	string str;
	cin.getline(cin , str);
	isOdd()(str);

	system("pause");
	return 0;
}