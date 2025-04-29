#include "StartMenuBar.h"

StartMenuBar::StartMenuBar() : window(sf::VideoMode(window_width, window_height), title)
{
	window.setFramerateLimit(60);


	clock.restart();
	cursor.loadFromSystem(sf::Cursor::Arrow);


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

		
		sf::Vector2i mouse_position = sf::Mouse::getPosition(window);

		if (image_for_object.getImageForObjectSprite().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_position)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else if (objects_name.getBackGround().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_position)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else if (objects_count.getBackGround().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_position)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else cursor.loadFromSystem(sf::Cursor::Arrow);
		

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

	window.draw(image_for_object.getImageForObjectSprite());

	window.draw(objects_name.getBackGround());

	window.draw(objects_name.getText());

	window.draw(objects_count.getBackGround());

	window.draw(objects_count.getText());

	window.draw(objects_price.getBackGround());

	window.draw(objects_price.getText());

	window.draw(objects_description.getBackGround());

	window.draw(objects_description.getText());

	window.setMouseCursor(cursor);

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