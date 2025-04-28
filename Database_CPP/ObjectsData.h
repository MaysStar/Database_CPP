#pragma once
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/String.hpp>

class ObjectsData
{
private:
	sf::RectangleShape object_background;
public:
	ObjectsData(sf::String file);
	const sf::RectangleShape& getObjectTexture() const;
	virtual void getData();
	virtual ~ObjectsData();
};

