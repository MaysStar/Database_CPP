#include "ObjectsData.h"

ObjectsData::ObjectsData()
{
	if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
	{
		throw std::runtime_error("Failed to load image");
	}

	object_background.setSize(sf::Vector2f(200, 50));

	object_background.setFillColor(sf::Color(255, 23, 197));

	object_background.setOrigin(object_background.getSize().x / 2, object_background.getSize().y / 2);

	object_background.setOutlineThickness(3);

	object_background.setOutlineColor(sf::Color::Black);

	object_text.setFont(font);

	object_text.setCharacterSize(20);

	object_text.setFillColor(sf::Color::Black);

	object_text.setOrigin(object_text.getGlobalBounds().width / 2, object_text.getGlobalBounds().height / 2);
}

const sf::RectangleShape& ObjectsData::getObjectTexture() const
{
	return object_background;
}

void ObjectsData::getData()
{
	// Implement the logic to get data
}

ObjectsData::~ObjectsData()
{
	// Destructor
}