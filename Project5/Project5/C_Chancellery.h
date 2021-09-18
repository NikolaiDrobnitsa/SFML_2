#pragma once
#include <ostream>
class Ñ_Chancellery
{
protected:
	const char* color;
public:
	Ñ_Chancellery() : color("red") {};
	Ñ_Chancellery(const char * color) : color(color) {};

	void draw(const char* text, std::ostream &out) {
		out << "draw text \"" << text << "\" with color [" << this->color << "]";
	}

	~Ñ_Chancellery() {
		delete this->color;
	}
};
