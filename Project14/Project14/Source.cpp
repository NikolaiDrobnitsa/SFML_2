#include <iostream>
#include <list>
#include <iterator>

using std::list;

using std::cout;

class C_Point{
private:
	int x;
	int y;
public:
	C_Point() {}

	C_Point(int _x,int _y) {
		x = _x;
		y = _y;
	}

	void show() {
		cout << this->x << "\t" << this->y << "\n";
	}

};
void main_show(list<C_Point> &points) {
	for (auto element : points)
	{
		element.show();
	}
	cout << "\n";
}

int main()
{
	C_Point _points;
	
	list<C_Point> points;

	points.push_back(C_Point(7, 4));
	points.push_back(C_Point(5, 8));
	points.push_back(C_Point(1, 2));

	main_show(points);

	system("pause");
}

