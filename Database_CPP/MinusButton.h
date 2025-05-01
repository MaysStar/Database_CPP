#pragma once
#include "NavigationButtons.h"

class MinusButton : public NavigationButtons
{
private:
	short count;
public:
	MinusButton();
	void changeButtonTexture() override;
	void setStartCount();
	void increaseCount();
	const sf::Sprite& getButtonSprite() const override;
	void setTexture() override;
	~MinusButton();
};