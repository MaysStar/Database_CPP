#pragma once
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>

class LeftSideBarInTop
{
private:
	sf::RectangleShape left_side_bar_in_top;
public:
	LeftSideBarInTop();
	const sf::RectangleShape& getLeftSideBarInTop() const;
	~LeftSideBarInTop();
};

