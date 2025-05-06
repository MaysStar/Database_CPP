#pragma once
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/System/String.hpp>

class ObjectsData
{
protected:
	sf::RectangleShape object_background;
	sf::Text object_text;
	sf::Font font;
public:
	ObjectsData();
	const sf::RectangleShape& getObjectTexture() const;
	virtual void getData();
	virtual ~ObjectsData();
};