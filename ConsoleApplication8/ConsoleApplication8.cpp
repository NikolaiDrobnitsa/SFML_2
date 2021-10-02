#include "pch.h"
#include <iostream>
#include "MainWindow.h"

int main()
{
	
	MainWindow * window = new MainWindow(1000, 1000,"");
	window->setBgColor(5, 176, 48);
	//window->setBgColor(sf::Color::Green);
	//window->setMainName("SSSS");

	window->show();
	delete window;
	return 0;
}