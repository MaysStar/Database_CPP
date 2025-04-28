#include "StartMenuBar.h"

StartMenuBar::StartMenuBar() : window(sf::VideoMode(window_width, window_height), title)
{
	window.setFramerateLimit(60);


	clock.restart();


	processEvents();
}

sf::RenderWindow& StartMenuBar::getWindow()
{
	return window;
}

void StartMenuBar::processEvents()
{
	setData();


	while (window.isOpen())
	{
		delta_time = clock.getElapsedTime();
		clock.restart();
		//std::cout << delta_time.asSeconds() << std::endl;

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}


		render();
		update();
	}
}

void StartMenuBar::setData()
{
	start_menu_background.setOrigin(window_width / 2, window_height / 2);
	start_menu_background.setSize(sf::Vector2f(window_width, window_height));
	start_menu_background.setFillColor(sf::Color(160, 160, 160));
	start_menu_background.setPosition(window_width / 2, window_height / 2);
}

void StartMenuBar::render()
{
	window.clear(sf::Color(160, 160, 160));
	
	window.draw(start_menu_background);

	window.draw(left_side_bar.getLeftSideBarBackground());

	window.draw(right_side_bar.getRightSideBarBackground());

	window.display();
}

void StartMenuBar::update()
{
	// Update implementation
}

StartMenuBar::~StartMenuBar()
{
	// Destructor implementation (if needed)
}