#include "ObjectsPrice.h"

ObjectsPrice::ObjectsPrice() : ObjectsData()
{
	// Constructor
	getData();
}

void ObjectsPrice::getData()
{
	sf::String text = "ObjectsPrice";
	object_text.setString(text);

	object_background.setSize(sf::Vector2f(180, 50));
	object_background.setOrigin(object_background.getLocalBounds().width / 2, object_background.getLocalBounds().height / 2);
	object_background.setPosition(1050, 213);
	object_background.setFillColor(sf::Color(33, 133, 104));

	object_text.setOrigin(object_text.getLocalBounds().width / 2, object_text.getLocalBounds().height / 2);
	object_text.setPosition(object_background.getPosition());
}

const sf::RectangleShape& ObjectsPrice::getBackGround() const
{
	return object_background;
}

const sf::Text& ObjectsPrice::getText() const
{
	return object_text;
}

void ObjectsPrice::setData(float price)
{
	object_text.setString(std::to_string(price));
	object_text.setOrigin(object_text.getLocalBounds().width / 2, object_text.getLocalBounds().height / 2);
	object_text.setPosition(object_background.getPosition());
}

ObjectsPrice::~ObjectsPrice()
{
	// Destructor
}