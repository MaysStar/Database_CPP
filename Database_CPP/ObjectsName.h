#pragma once
#include "ObjectsData.h"

class ObjectsName : public ObjectsData
{
public:
	ObjectsName();
	void getData() override;
	const sf::RectangleShape& getBackGround() const;
	const sf::Text& getText() const;
	~ObjectsName() override;
};

