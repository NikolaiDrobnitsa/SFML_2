#include <iostream>

class point_1{
private:
	int x;
	int y;
public:
	point_1() {}

	point_1(int _x,int _y) {
		x = _x;
		y = _y;
	}
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}

	void show() {
		std::cout << this->x << "|" << this->y << "\n";
	}
};


class C_Point_Operation_Facade {
	point_1 *point_1_;
	point_1 *point_2_;


public:
	C_Point_Operation_Facade() {
		this->point_1_ = new point_1(11, 1);
		this->point_2_ = new point_1(2, 2);
	}
	point_1 operation() {
		int resultX = this->point_1_->getX() + this->point_2_->getX();
		int resultY = this->point_1_->getY() + this->point_2_->getY();

		return point_1(resultX, resultY);
	}

};

int main()
{
	C_Point_Operation_Facade _C_Point_Operation_Facade;
	_C_Point_Operation_Facade.operation().show();
	system("pause");
}

