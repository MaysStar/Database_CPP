#include "RightSideBar.h"

RightSideBar::RightSideBar()
{
	right_side_bar_background.setSize(sf::Vector2f(650, 550));
	right_side_bar_background.setOrigin(right_side_bar_background.getSize().x / 2, right_side_bar_background.getSize().y / 2);
	right_side_bar_background.setFillColor(sf::Color(255, 183, 48));
	right_side_bar_background.setPosition(right_side_bar_background.getSize().x, right_side_bar_background.getSize().y / 2 + 30);
}

sf::RectangleShape& RightSideBar::getRightSideBarBackground()
{
	return right_side_bar_background;
}

RightSideBar::~RightSideBar()
{
	// Destructor
}