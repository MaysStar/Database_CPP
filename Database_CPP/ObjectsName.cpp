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

ObjectsName::~ObjectsName()
{
	// Destructor
}