#pragma once
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>

class LeftSideBar
{
private:
	sf::RectangleShape left_side_bar_background;
public:
	LeftSideBar();
	sf::RectangleShape& getLeftSideBarBackground();
	~LeftSideBar();
};

