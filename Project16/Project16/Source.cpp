#include <iostream>
#include <string>

using std::string;
using std::cout;

int main() {
	string str("I love CPP! And I love Py!");
	/*int iter = 0;
	for (int i = str.find("I love CPP!"); i < (str.find("I love CPP!") + strlen("I love CPP!")); i++)
	{
		str.insert(iter,1,str[iter]);
		iter += 2;
	}
	cout << str<<"\n";
	*/

		

	for (int i = str.find("love"); i < (str.find("love") + strlen("love")); i++)
	{
		str.replace(str.find("love"), strlen("love"), "hate");
	}
	
	cout << "default :" <<str << "\n";
	int tmp = 0, num = 0;
	num = strlen("I love CPP! And I love Py!");
	for (int i = 0; i < num; i++)
	{
		for (int j = i+1; j < num; j++)
		{
			if (str[j]<str[i])
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}
	cout << "sort str :" << str << "\n";
	system("pause");
}