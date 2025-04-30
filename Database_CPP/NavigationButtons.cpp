#include "NavigationButtons.h"

NavigationButtons::NavigationButtons()
{
	setTexture();
}

void NavigationButtons::setTexture()
{
	
}

const sf::Sprite& NavigationButtons::getButtonSprite() const
{
	return button_sprite;
}

void NavigationButtons::changeButtonTexture()
{
	button_sprite.setTextureRect(sf::IntRect(0, 0, 40, 40));
}

NavigationButtons::~NavigationButtons()
{
	// Destructor
}