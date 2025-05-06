#pragma once
#include "ObjectsData.h"

class ObjectsDescription : public ObjectsData
{
public:
	ObjectsDescription();
	void getData() override;
	void setData(std::string description);
	const sf::RectangleShape& getBackGround() const;
	const sf::Text& getText() const;
	~ObjectsDescription() override;
};

