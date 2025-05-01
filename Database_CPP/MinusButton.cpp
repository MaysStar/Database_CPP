#include "MinusButton.h"

MinusButton::MinusButton() : NavigationButtons()
{
	setTexture();
	setStartCount();
}

void MinusButton::setTexture()
{
	if (!button_texture.loadFromFile("C:\\programing\\NULP_OOP\\Database_CPP\\source\\minus.png"))
	{
		throw std::runtime_error("Failed to load image");
	}
	button_sprite.setTexture(button_texture);
	button_sprite.setOrigin(button_sprite.getGlobalBounds().width / 2, button_sprite.getGlobalBounds().height / 2);
	button_sprite.setScale(.1, .1);
	button_sprite.setPosition(300, 51);
	button_sprite.setTextureRect(sf::IntRect(0, 0, 375, 385));
}

void MinusButton::changeButtonTexture()
{
	if (count > 2) count = 2;
	button_sprite.setTextureRect(sf::IntRect(count * 375, 0, 375, 385));
}

void MinusButton::increaseCount()
{
	count++;
}

void MinusButton::setStartCount()
{
	count = 0;
}

const sf::Sprite& MinusButton::getButtonSprite() const
{
	return button_sprite;
}

MinusButton::~MinusButton()
{

}