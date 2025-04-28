#include "ObjectsData.h"

ObjectsData::ObjectsData(sf::String file)
{
	
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