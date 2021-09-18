#include <iostream>
#include <ostream>
class Sum {
	int _res = 0;
public:
	Sum() { this->_res = 0; }
	Sum(Sum& oldSum) {
		this->_res += oldSum._res;
	}
	Sum* operator()(int newObj) {
		this->_res += newObj;
		return this;
	}
	int getRes() {
		return this->_res;
	}
	friend std::ostream& operator << (std::ostream& out, const Sum & s);
};
class Multiply {
	int _res = 0;
public:
	Multiply() { this->_res = 0; }
	Multiply(Multiply& oldMult) {
		this->_res += oldMult._res;
	}
	Multiply* operator()(int newObj) {
		this->_res *= newObj;
		return this;
	}
	int getRes() {
		return this->_res;
	}
	friend std::ostream& operator << (std::ostream& out, const Multiply & s);
};
class Minus {
	int _res = 0;
public:
	Minus() { this->_res = 0; }
	Minus(Minus& oldMult) {
		this->_res -= oldMult._res;
	}
	Minus(Multiply& oldMult) {
		this->_res -= oldMult.getRes();
	}
	Minus(M& oldMult) {
		this->_res -= oldMult.getRes();
	}
	Minus* operator()(int newObj) {
		this->_res -= newObj;
		return this;
	}

	friend std::ostream& operator << (std::ostream& out, const Minus & s);
};
class Operation : private Multiply , private Minus , private Sum
{

};

int main() {
	auto s = (*Sum(*Minus(*Multiply()(6))(3))(5));

	
	std::cout << *s << "\n";
	system("pause");
	return 0;
}

std::ostream & operator<<(std::ostream & out, const Multiply & s)
{
	out << "\t " << s._res;
	return out;
}

std::ostream & operator<<(std::ostream & out, const Minus & s)
{
	out << "\t " << s._res;
	return out;
}
std::ostream & operator<<(std::ostream & out, const Sum & s)
{
	out << "\t " << s._res;
	return out;
}