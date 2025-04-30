#include "LeftSideBar.h"

LeftSideBar::LeftSideBar()
{
	left_side_bar_background.setSize(sf::Vector2f(300, 510));
	left_side_bar_background.setOrigin(left_side_bar_background.getSize().x / 2, left_side_bar_background.getSize().y / 2);

	left_side_bar_background.setFillColor(sf::Color(97, 255, 118));
	left_side_bar_background.setPosition(left_side_bar_background.getSize().x / 2 + 20, left_side_bar_background.getSize().y / 2 + 70);
}

sf::RectangleShape& LeftSideBar::getLeftSideBarBackground()
{
	return left_side_bar_background;
}

LeftSideBar::~LeftSideBar()
{
	// Destructor
}