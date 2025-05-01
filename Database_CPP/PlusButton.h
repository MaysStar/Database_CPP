#pragma once
#include "NavigationButtons.h"

class PlusButton : public NavigationButtons
{
private:
	short count;
public:
	PlusButton();
	void changeButtonTexture() override;
	void setStartCount();
	void increaseCount();
	const sf::Sprite& getButtonSprite() const override;
	void setTexture() override;
	~PlusButton();
};
