#include "SearchButton.h"

SearchButton::SearchButton() : NavigationButtons()
{
	setTexture();
	setStartCount();
}

void SearchButton::setTexture()
{
	if (!button_texture.loadFromFile("C:\\programing\\NULP_OOP\\Database_CPP\\source\\search.png"))
	{
		throw std::runtime_error("Failed to load image");
	}
	button_sprite.setTexture(button_texture);
	button_sprite.setOrigin(button_sprite.getGlobalBounds().width / 2, button_sprite.getGlobalBounds().height / 2);
	button_sprite.setScale(.2, .2);
	button_sprite.setPosition(340, 50);
	button_sprite.setTextureRect(sf::IntRect(0, 0, 197, 197));
}

void SearchButton::changeButtonTexture()
{
	if (count > 2) count = 2;
	button_sprite.setTextureRect(sf::IntRect(count * 197, 0, 197, 197));
}

void SearchButton::increaseCount()
{
	count++;
}

void SearchButton::setStartCount()
{
	count = 0;
}

const sf::Sprite& SearchButton::getButtonSprite() const
{
	return button_sprite;
}

SearchButton::~SearchButton()
{

}