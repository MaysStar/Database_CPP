#include "ObjectsCount.h"

ObjectsCount::ObjectsCount() : ObjectsData()
{
	// Constructor
	getData();
}

void ObjectsCount::getData()
{
	sf::String text = "ObjectsCount";
	object_text.setString(text);

	object_background.setPosition(700, 215);
	object_background.setFillColor(sf::Color(0, 194, 212));

	object_text.setOrigin(object_text.getLocalBounds().width / 2, object_text.getLocalBounds().height / 2);
	object_text.setPosition(object_background.getPosition());
}


const sf::RectangleShape& ObjectsCount::getBackGround() const
{
	return object_background;
}

const sf::Text& ObjectsCount::getText() const
{
	return object_text;
}

ObjectsCount::~ObjectsCount()
{
	// Destructor
}