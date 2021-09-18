#include <iostream>
#include <vector>
#include <time.h>
using std::vector;
using std::cout;

void fill_vctr(vector<char>  & simv ) {

	simv.push_back(31);
	simv.push_back(45);
	simv.push_back(65);
	simv.push_back(37);
	simv.push_back(56);
	simv.push_back(44);
	simv.push_back(97);
}
void rand_vctr(vector <char> & simv) {
	simv.push_back(rand() % 25 + 97);
	simv.push_back(rand() % 25 + 97);
	simv.push_back(rand() % 25 + 97);

}
void show_vctr(vector <char>  & simv) {
	for (auto const & element : simv)
	{
		cout << element << " | ";
	}
	cout << "\n";
}
int main() {
	srand(time(0));
	vector <char> simv;
	fill_vctr(simv);
	rand_vctr(simv);
	show_vctr(simv);

	simv.clear();
	system("pause");
}
