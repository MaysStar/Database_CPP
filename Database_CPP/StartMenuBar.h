#pragma once
#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#define window_width 800
#define window_height 600
#define title "Database Application"

class StartMenuBar
{
private:
	sf::RenderWindow window;
public:
	StartMenuBar();
	sf::RenderWindow& getWindow();
	~StartMenuBar();
};

