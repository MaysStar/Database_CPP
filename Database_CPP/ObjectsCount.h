#pragma once
#include "ObjectsData.h"

class ObjectsCount : public ObjectsData
{
public:
	ObjectsCount();
	void getData() override;
	void setData(int count);
	const sf::RectangleShape& getBackGround() const;
	const sf::Text& getText() const;
	~ObjectsCount() override;
};

