#pragma once
#include <iostream>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class NavigationButtons
{
protected:
	sf::Texture button_texture;
	sf::Sprite button_sprite;
public:
	NavigationButtons();
	virtual void setTexture();
	virtual const sf::Sprite& getButtonSprite() const;
	virtual void changeButtonTexture();
	~NavigationButtons();
};

