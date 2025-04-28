#pragma once
#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include "LeftSideBar.h"
#define window_width 1000
#define window_height 600
#define title "Database Application"

class StartMenuBar
{
private:
	sf::RenderWindow window;
	sf::RectangleShape start_menu_background;
	sf::Clock clock;
	sf::Time delta_time;
	LeftSideBar left_side_bar;
public:
	StartMenuBar();
	sf::RenderWindow& getWindow();
	void processEvents();
	void setData();
	void render();
	void update();
	~StartMenuBar();
};

