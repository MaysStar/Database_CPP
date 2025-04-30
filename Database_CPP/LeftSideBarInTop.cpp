#include "LeftSideBarInTop.h"

LeftSideBarInTop::LeftSideBarInTop()
{
	left_side_bar_in_top.setSize(sf::Vector2f(300, 40));
	left_side_bar_in_top.setOrigin(left_side_bar_in_top.getSize().x / 2, left_side_bar_in_top.getSize().y / 2);
	left_side_bar_in_top.setFillColor(sf::Color(3, 124, 138));
	left_side_bar_in_top.setPosition(left_side_bar_in_top.getSize().x / 2 + 20, 50);
}

const sf::RectangleShape& LeftSideBarInTop::getLeftSideBarInTop() const
{
	return left_side_bar_in_top;
}

LeftSideBarInTop::~LeftSideBarInTop()
{
	// Destructor
}