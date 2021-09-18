#pragma once
#include <SFML/Graphics.hpp>
using std::string;
class MainWindow : public sf::RenderWindow
{
	sf::Color _bgColor;
	string _name;
public:
	MainWindow(int width, int heigth, std::string _name) : sf::RenderWindow(sf::VideoMode(width, heigth), _name){
		_bgColor = sf::Color::Red;
	}
	void show() {
		while (this->isOpen())
		{
			sf::Event event;
			while (this->pollEvent(event))
			{
				if (event.type == sf::Event::Closed) {
					this->close();
				}
			}

			this->clear(this->_bgColor);
			this->display();
		}
	}

	void setBgColor(int r, int g, int b) {
		this->_bgColor.r = r;
		this->_bgColor.g = g;
		this->_bgColor.b = b;
	}
	void setBgColor(const sf::Color& _color) {
		this->_bgColor = sf::Color(_color);
	}
	void setMainName(string name) {
		this->_name = name;
		this->setTitle(this->_name);
	}

	
	~MainWindow() {}
};