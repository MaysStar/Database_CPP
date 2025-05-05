#include "ObjectsName.h"

ObjectsName::ObjectsName() : ObjectsData()
{
	// Constructor
	getData();
}

void ObjectsName::getData()
{
    sf::String text = "ObjectsName";
    object_text.setString(text);

	object_background.setSize(sf::Vector2f(545, 50));
	object_background.setOrigin(object_background.getSize().x / 2, object_background.getSize().y / 2);
    object_background.setPosition(870, 85);

    object_text.setOrigin(object_text.getLocalBounds().width / 2, object_text.getLocalBounds().height / 2);
    object_text.setPosition(object_background.getPosition());
}


const sf::RectangleShape& ObjectsName::getBackGround() const
{
	return object_background;
}

const sf::Text& ObjectsName::getText() const
{
	return object_text;
}

void ObjectsName::setData(const std::string name)
{
	object_text.setString(name);
	object_text.setOrigin(object_text.getLocalBounds().width / 2, object_text.getLocalBounds().height / 2);
	object_text.setPosition(object_background.getPosition());
}

ObjectsName::~ObjectsName()
{
	// Destructor
}