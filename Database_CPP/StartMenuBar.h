#pragma once
#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Sleep.hpp>
#include "LeftSideBar.h"
#include "LeftSideBarInTop.h"
#include "RightSideBar.h"
#include "ImageForObject.h"
#include "ObjectsName.h"
#include "ObjectsCount.h"
#include "ObjectsPrice.h"
#include "ObjectsDescription.h"
#include "SearchButton.h"
#include "MinusButton.h"
#define window_width 1200
#define window_height 600
#define title "Database Application"

class StartMenuBar
{
private:
	sf::RenderWindow window;
	sf::RectangleShape start_menu_background;
	sf::Clock clock;
	sf::Time delta_time;
	sf::Cursor cursor;
	LeftSideBar left_side_bar;
	LeftSideBarInTop left_side_bar_in_top;
	RightSideBar right_side_bar;
	ImageForObject image_for_object;
	ObjectsName objects_name;
	ObjectsCount objects_count;
	ObjectsPrice objects_price;
	ObjectsDescription objects_description;
	SearchButton search_button;
	MinusButton minus_button;
public:
	StartMenuBar();
	sf::RenderWindow& getWindow();
	void processEvents();
	void setData();
	void render();
	void update();
	~StartMenuBar();
};

