#pragma once
#include "ObjectsData.h"

class ObjectsName : public ObjectsData
{
public:
	ObjectsName();
	void getData() override;
	void setData(const std::string name);
	const sf::RectangleShape& getBackGround() const;
	const sf::Text& getText() const;
	~ObjectsName() override;
};

