#pragma once
#include <ostream>
class �_Chancellery
{
protected:
	const char* color;
public:
	�_Chancellery() : color("red") {};
	�_Chancellery(const char * color) : color(color) {};

	void draw(const char* text, std::ostream &out) {
		out << "draw text \"" << text << "\" with color [" << this->color << "]";
	}

	~�_Chancellery() {
		delete this->color;
	}
};
