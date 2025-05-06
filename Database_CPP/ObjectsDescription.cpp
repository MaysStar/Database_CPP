#include "ObjectsDescription.h"

ObjectsDescription::ObjectsDescription() : ObjectsData()
{
	// Constructor
	getData();
}

void ObjectsDescription::getData()
{
	sf::String text = "ObjectsDescription";
	object_text.setString(text);

	object_background.setSize(sf::Vector2f(785, 300));
	object_background.setOrigin(object_background.getLocalBounds().width / 2, object_background.getLocalBounds().height / 2);
	object_background.setPosition(750, 400);
	object_background.setFillColor(sf::Color(33, 133, 104));

	object_text.setOrigin(object_text.getLocalBounds().width / 2, object_text.getLocalBounds().height / 2);
	object_text.setPosition(object_background.getPosition());
}

const sf::RectangleShape& ObjectsDescription::getBackGround() const
{
	return object_background;
}

const sf::Text& ObjectsDescription::getText() const
{
	return object_text;
}

void ObjectsDescription::setData(std::string description)
{
	object_text.setString(description);
	object_text.setOrigin(object_text.getLocalBounds().width / 2, object_text.getLocalBounds().height / 2);
	object_text.setPosition(object_background.getPosition());
}

ObjectsDescription::~ObjectsDescription()
{
	// Destructor
}