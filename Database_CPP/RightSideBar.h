#pragma once
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>

class RightSideBar
{
private:
	sf::RectangleShape right_side_bar_background;
public:
	RightSideBar();
	sf::RectangleShape& getRightSideBarBackground();
	~RightSideBar();
};

