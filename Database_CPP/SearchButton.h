#pragma once
#include "NavigationButtons.h"

class SearchButton : public NavigationButtons
{
private:
	short count;
public:
	SearchButton();
	void changeButtonTexture() override;
	void setStartCount();
	void increaseCount();
	const sf::Sprite& getButtonSprite() const override;
	void setTexture() override;
	~SearchButton();
};

