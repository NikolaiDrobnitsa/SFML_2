#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ñ_MainWindow.h"
using namespace sf;

int main()
{
	C_MainWindow * window = new C_MainWindow(532,850, "");
	//window->setBgColor(5, 176, 48);
	//window->setBgColor(sf::Color::Green);
	window->setMainName("Doudle jump");

	window->show();
	delete window;
	return 0;

	return 0;
}