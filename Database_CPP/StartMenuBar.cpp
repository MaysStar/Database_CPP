#include "StartMenuBar.h"

StartMenuBar::StartMenuBar() : window(sf::VideoMode(window_width, window_height), title)
{
	window.setFramerateLimit(60);
	system("pause");
}

sf::RenderWindow& StartMenuBar::getWindow()
{
	return window;
}

StartMenuBar::~StartMenuBar()
{
	// Destructor implementation (if needed)
}