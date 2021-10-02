#pragma once
#define SFML_NO_DEPRECATED_WARNINGS
#include <SFML/Graphics.hpp>
#include <iostream>
#include "C_doodle.h"
using std::string;
class C_MainWindow : public sf::RenderWindow
{
	sf::Color _bgColor;
	string _name;
	string _text;
	sf::Text text;
	sf::Font font;
	sf::Sprite sprite;
	sf::IntRect IntRect;
	sf::Event event;
	sf::Texture texture;
	C_doodle *Player;

	int num = 0;
	

public:
	C_MainWindow(int width, int height, std::string _name) : sf::RenderWindow(sf::VideoMode(width, height), _name)  {
		_bgColor = sf::Color::Red;
		if (!font.loadFromFile("arial.ttf"))
		{
			throw;
		}
		text.setFont(font);

	// выбираем отображаемую строку
		text.setString("Hello");

		// выбираем размер символов
		text.setCharacterSize(50); // в пикселях, а не точках!

		// выбираем цвет

		// выбираем стиль текста
		text.setStyle(sf::Text::Bold | sf::Text::Underlined);

		text.setPosition(50, 100);

		if (!texture.loadFromFile("background.png"))
		{
			throw;
		}
		
		this->Player = new C_doodle(0, 0);
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

					texture.setRepeated(true);
					texture.loadFromFile("background.png",sf::IntRect(0, 0, 532, 850));
					sf::Sprite sprite(texture);
					this->draw(sprite);
					this->draw(this->Player->getSprite());
					this->display();
			
			}
				
			

		}
	}
	//if (event.type == sf::Event::MouseButtonPressed)
	//{
	//}
	//if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) == true)
	//{
	//	num++;
	//	std::cout << num << "\n";
	//}
	//void setBgColor(int r, int g, int b) {
	//	this->_bgColor.r = r;
	//	this->_bgColor.g = g;
	//	this->_bgColor.b = b;
	//}
	//void setBgColor(const sf::Color& _color) {
	//	this->_bgColor = sf::Color(_color);
	//}
	void setMainName(string name) {
		this->_name = name;
		this->setTitle(this->_name);
	}
	
	//void drawText(string text) {
	//	this->_text = text;
	//	std::cout << "enter the text";
	//	getline(std::cin, text);

	//}

	~C_MainWindow() {}
};