#include "RightSideBar.h"

RightSideBar::RightSideBar()
{
	right_side_bar_background.setSize(sf::Vector2f(850, 550));
	right_side_bar_background.setOrigin(right_side_bar_background.getSize().x / 2, right_side_bar_background.getSize().y / 2);
	right_side_bar_background.setFillColor(sf::Color(3, 124, 138));
	right_side_bar_background.setPosition(750, right_side_bar_background.getSize().y / 2 + 30);
}

sf::RectangleShape& RightSideBar::getRightSideBarBackground()
{
	return right_side_bar_background;
}

RightSideBar::~RightSideBar()
{
	// Destructor
}