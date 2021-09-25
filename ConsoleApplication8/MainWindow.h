#pragma once
#define SFML_NO_DEPRECATED_WARNINGS
#include <SFML/Graphics.hpp>
#include <iostream>
#include<time.h>
using std::string;
using std::getline;
class MainWindow : public sf::RenderWindow
{
	sf::Color _bgColor;
	string _name;
	string _text;
	sf::Text text;
	sf::Font font;
	sf::Texture texture;
	sf::Sprite sprite;
	sf::IntRect IntRect;
	sf::Event event;
	int num = 0;
	
public:
	MainWindow(int width, int height, std::string _name) : sf::RenderWindow(sf::VideoMode(width, height), _name){
		_bgColor = sf::Color::Red;
		if (!font.loadFromFile("arial.ttf"))
		{
			//throw new Exception();
		}
		text.setFont(font); // font ��� sf::Font

	// �������� ������������ ������
		text.setString("Hello");

		// �������� ������ ��������
		text.setCharacterSize(50); // � ��������, � �� ������!

		// �������� ����
		text.setColor(sf::Color::Black);

		// �������� ����� ������
		text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	
		text.setPosition(50, 100);

		if (!texture.loadFromFile("image.png"))
		{
			throw;
		}
		
		
	}
	void show() {
		srand(time(0));
		while (this->isOpen())
		{
			sf::Event event;
		
			while (this->pollEvent(event))
			{
				if (event.type == sf::Event::Closed) {
					this->close();
				}
				if (event.type == sf::Event::MouseButtonPressed)
				{
					if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) == true)
					{
						num++;
						std::cout << num << "\n";
						this->setBgColor(rand()%100, rand() % 100, rand() % 100);
					}
				}
			}
			this->clear(this->_bgColor);
			this->draw(text);
			texture.setRepeated(true);
			texture.loadFromFile("image.png", sf::IntRect(300, 400, 200, 100));
			sf::Sprite sprite(texture);
			this->draw(sprite);
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
	//void drawText(string text) {
	//	this->_text = text;
	//	std::cout << "enter the text";
	//	getline(std::cin, text);

	//}


	~MainWindow() {}
};