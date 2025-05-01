#include "PlusButton.h"

PlusButton::PlusButton() : NavigationButtons()
{
	setTexture();
	setStartCount();
}

void PlusButton::setTexture()
{
	if (!button_texture.loadFromFile("C:\\programing\\NULP_OOP\\Database_CPP\\source\\plus.png"))
	{
		throw std::runtime_error("Failed to load image");
	}
	button_sprite.setTexture(button_texture);
	button_sprite.setOrigin(button_sprite.getGlobalBounds().width / 2, button_sprite.getGlobalBounds().height / 2);
	button_sprite.setScale(.15, .15);
	button_sprite.setPosition(260, 51);
	button_sprite.setTextureRect(sf::IntRect(0, 0, 233, 242));
}

void PlusButton::changeButtonTexture()
{
	if (count > 2) count = 2;
	button_sprite.setTextureRect(sf::IntRect(count * 233, 0, 233, 242));
}

void PlusButton::increaseCount()
{
	count++;
}

void PlusButton::setStartCount()
{
	count = 0;
}

const sf::Sprite& PlusButton::getButtonSprite() const
{
	return button_sprite;
}

PlusButton::~PlusButton()
{

}