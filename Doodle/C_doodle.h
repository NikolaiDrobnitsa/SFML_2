#pragma once
#include <SFML/Graphics.hpp>

using std::string;
sf::Keyboard;
class C_doodle
{
private:
	sf::Sprite sprite_2;
	sf::Texture doodle;
	int x = 0, y = 0;
public:
	


	void moveLeft() {
		this->x--;
		this->y++;
	}
	void moveRight() {
		this->x++;
		this->y++;
	}
	void jump(){
		this->y;
	}

	C_doodle(int x, int y) {
		this->doodle.loadFromFile("doodle.png", sf::IntRect(0, 0, 80, 80));
		this->sprite_2.setTexture(this->doodle);
		this->sprite_2.setPosition(225, 700);
	}
	sf::Sprite getSprite() {
		return this->sprite_2;
	}

};

