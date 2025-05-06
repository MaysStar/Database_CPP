#include "StartMenuBar.h"

StartMenuBar::StartMenuBar() : window(sf::VideoMode(window_width, window_height), title), add_object(window_width, window_height)
{
	window.setFramerateLimit(60);

	if (!icon.loadFromFile("C:\\programing\\NULP_OOP\\Database_CPP\\source\\icon.png"))
	{
		throw std::runtime_error("Failed to load image");
	}

	if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
	{
		throw std::runtime_error("Failed to load image");
	}

	window.setIcon(32, 32, icon.getPixelsPtr());

	clock.restart();
	cursor.loadFromSystem(sf::Cursor::Arrow);

	isTextEntering = false;
	isSearch = false;
	isAdd = false;
	isErase = false;
	number_of_pressed_object = 0;

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

			if (event.type == sf::Event::TextEntered) {
				char entered = static_cast<char>(event.text.unicode);
				
				if (isTextEntering)
				{
					isSearch = false;
					if (entered == 8) { // Backspace
						if (!user_input.empty()) user_input.pop_back();
					}

					if (user_input.size() < 12)
					{
						if (entered >= 32 && entered < 127) {
							user_input += entered;
						}
						input_field.setText(user_input);
					}
				}
			}
		}

		if (isErase)
		{
			if (!drugs.empty())
			{
				drugs.erase(drugs.begin() + number_of_pressed_object);

				if (number_of_pressed_object >= drugs.size())
				{
					number_of_pressed_object = static_cast<int>(drugs.size()) - 1;
				}

			}
			isErase = false;
		}
		
		sf::Vector2i mouse_pixel_pos = sf::Mouse::getPosition(window);
		sf::Vector2f mouse_world_pos = window.mapPixelToCoords(mouse_pixel_pos);

		for (int i = 0; i < drugs.size(); i++)
		{
			if (drugs[i].getBackground().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
			{
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
					number_of_pressed_object = i;
				}
			}
			else
			{
				drugs[i].unsetOutlineThicknessForBackground();
			}
		}

		if (isAdd)
		{
			if(add_object.getSubmitObjectBackgroundForTextSprite().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
			{
				cursor.loadFromSystem(sf::Cursor::Text);
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
					isAdd = false;
				}
			}
		}

		if (!drugs.empty() && number_of_pressed_object >= 0 && number_of_pressed_object < drugs.size())
		{
			drugs[number_of_pressed_object].setOutlineThicknessForBackground();
			image_for_object.setImageForObjectTexture(drugs[number_of_pressed_object].getSprite());
			objects_name.setData(drugs[number_of_pressed_object].getName());
			objects_count.setData((drugs[number_of_pressed_object].getCount()));
			objects_price.setData(drugs[number_of_pressed_object].getPrice());
			objects_description.setData(drugs[number_of_pressed_object].getDescription());
		}

		if (input_field.getBackground().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
		{
			cursor.loadFromSystem(sf::Cursor::Text);
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				isTextEntering = true;
			}
		}
		else if (image_for_object.getImageForObjectSprite().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else if (objects_name.getBackGround().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else if (objects_count.getBackGround().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else if (objects_price.getBackGround().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else if (objects_description.getBackGround().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
		{
			cursor.loadFromSystem(sf::Cursor::Hand);
		}
		else if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			isTextEntering = false;
		}
		else cursor.loadFromSystem(sf::Cursor::Arrow);

		
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (search_button.getButtonSprite().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
			{
				//sf::sleep(sf::milliseconds(20));
				search_button.increaseCount();
				search_button.changeButtonTexture();
				isSearch = true;
			}

			if (minus_button.getButtonSprite().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
			{
				//sf::sleep(sf::milliseconds(20));
				minus_button.increaseCount();
				minus_button.changeButtonTexture();

				time_to_minus = clock_to_minus.getElapsedTime();
				if (time_to_minus >= sf::seconds(.3))
				{
					isErase = true;
					clock_to_minus.restart();
				}
			}

			if (plus_button.getButtonSprite().getGlobalBounds().contains(static_cast<sf::Vector2f>(mouse_world_pos)))
			{
				//sf::sleep(sf::milliseconds(20));
				plus_button.increaseCount();
				plus_button.changeButtonTexture();

				time_to_minus = clock_to_minus.getElapsedTime();
				if (time_to_minus >= sf::seconds(.3))
				{
					isAdd = true;
					clock_to_minus.restart();
				}
			}
		}
		else if (event.type == sf::Event::MouseWheelScrolled)
		{
			static sf::Clock scroll_clock; // Òàéìåð äëÿ çàòðèìêè
			sf::Time scroll_delay = sf::milliseconds(100); // Çàòðèìêà 100 ìñ

			if (scroll_clock.getElapsedTime() >= scroll_delay) // Ïåðåâ³ðÿºìî, ÷è ìèíóëà çàòðèìêà
			{
				if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
				{
					const int max_visible_items = 4; // Ê³ëüê³ñòü åëåìåíò³â, ÿê³ â³äîáðàæàþòüñÿ îäíî÷àñíî
					const int total_items = static_cast<int>(drugs.size());

					if (event.mouseWheelScroll.delta < 0) // Ïðîêðó÷óâàííÿ âíèç
					{
						if (start_index + max_visible_items < total_items)
						{
							start_index++;
						}
					}
					else if (event.mouseWheelScroll.delta > 0) // Ïðîêðó÷óâàííÿ ââåðõ
					{
						if (start_index > 0)
						{
							start_index--;
						}
					}
				}

				scroll_clock.restart(); // Ïåðåçàïóñêàºìî òàéìåð
			}
		}
		else
		{
			search_button.setStartCount();
			search_button.changeButtonTexture();
			minus_button.setStartCount();
			minus_button.changeButtonTexture();
			plus_button.setStartCount();
			plus_button.changeButtonTexture();
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

	drugs.push_back(Drug(10, 20.0f, "Paracetamol", "Pain reliever", "C:\\programing\\NULP_OOP\\Database_CPP\\source\\paracetamol.jpg"));
	drugs.push_back(Drug(5, 15.0f, "Ibuprofen", "Anti-inflammatory", "C:\\programing\\NULP_OOP\\Database_CPP\\source\\ibuprofen.jpeg"));
	drugs.push_back(Drug(8, 30.0f, "Aspirin", "Blood thinner", "C:\\programing\\NULP_OOP\\Database_CPP\\source\\aspirin.jpeg"));
	drugs.push_back(Drug(12, 25.0f, "Amoxicillin", "Antibiotic", "C:\\programing\\NULP_OOP\\Database_CPP\\source\\amoxicillin.jpeg"));
	drugs.push_back(Drug(7, 18.0f, "Ciprofloxacin", "Antibiotic", "C:\\programing\\NULP_OOP\\Database_CPP\\source\\ciprofloxacin.jpeg"));
}

void StartMenuBar::render()
{
	window.clear(sf::Color(160, 160, 160));

	// Малюємо основний фон
	window.draw(start_menu_background);

	// Малюємо бічні панелі
	window.draw(left_side_bar.getLeftSideBarBackground());
	window.draw(left_side_bar_in_top.getLeftSideBarInTop());
	window.draw(right_side_bar.getRightSideBarBackground());

	// Малюємо інформацію про обраний об'єкт
	window.draw(image_for_object.getImageForObjectSprite());
	window.draw(objects_name.getBackGround());
	window.draw(objects_name.getText());
	window.draw(objects_count.getBackGround());
	window.draw(objects_count.getText());
	window.draw(objects_price.getBackGround());
	window.draw(objects_price.getText());
	window.draw(objects_description.getBackGround());
	window.draw(objects_description.getText());

	// Малюємо кнопки
	window.draw(search_button.getButtonSprite());
	window.draw(minus_button.getButtonSprite());
	window.draw(plus_button.getButtonSprite());

	// Малюємо поле вводу
	window.draw(input_field.getBackground());
	window.draw(input_field.getText());

	// Малюємо список ліків
	int count_of_drawing_drugs = 0;
	for (int i = start_index; i < drugs.size(); i++)
	{
		if (150 + count_of_drawing_drugs * 110 < window_height - 100)
		{
			drugs[i].setBackgroundPosition(170, 150 + count_of_drawing_drugs * 110);
			window.draw(drugs[i].getBackground());
			sf::Text text = drugs[i].getText();
			text.setFont(font);
			text.setPosition(drugs[i].getBackground().getPosition().x, drugs[i].getBackground().getPosition().y);
			window.draw(text);
			count_of_drawing_drugs++;
		}
		else
		{
			break; // Виходимо з циклу, якщо елементи більше не поміщаються у вікно
		}
	}

	// Малюємо вікно додавання об'єкта, якщо активне
	if (isAdd)
	{
		window.draw(add_object.getAddObjectBackground());
		window.draw(add_object.getSubmitObjectBackgroundForTextSprite());
		window.draw(add_object.getAddObjectBackgroundForText());
		window.draw(add_object.getAddObjectBackgroundForText2());
		window.draw(add_object.getAddObjectBackgroundForText3());
		window.draw(add_object.getAddObjectBackgroundForText4());
		window.draw(add_object.getAddObjectBackgroundForText5());
		window.draw(add_object.getAddObjectText());
		window.draw(add_object.getAddObjectText2());
		window.draw(add_object.getAddObjectText3());
		window.draw(add_object.getAddObjectText4());
		window.draw(add_object.getAddObjectText5());
	}

	// Встановлюємо курсор
	window.setMouseCursor(cursor);

	// Відображаємо все на екрані
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