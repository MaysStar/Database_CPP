#pragma once
#include "ObjectsData.h"

class ObjectsPrice : public ObjectsData
{
public:
	ObjectsPrice();
	void getData() override;
	const sf::RectangleShape& getBackGround() const;
	const sf::Text& getText() const;
	~ObjectsPrice() override;
};

