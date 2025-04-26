#pragma once
#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#define window_width 800
#define window_height 600
#define title "Database Application"

class StartMenuBar
{
private:
	sf::RenderWindow window;
	sf::RectangleShape start_menu_background;
	sf::Clock clock;
	sf::Time delta_time;
public:
	StartMenuBar();
	sf::RenderWindow& getWindow();
	void processEvents();
	void setData();
	void render();
	void update();
	~StartMenuBar();
};

