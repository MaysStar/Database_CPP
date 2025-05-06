#include "AddObject.h"

AddObject::AddObject(float window_width, float window_height)
{
	if (!submit_object_background_for_text_texture.loadFromFile("C:\\programing\\NULP_OOP\\Database_CPP\\source\\submit.png"))
	{
		throw std::runtime_error("Failed to load image");
	}
	if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
	{
		throw std::runtime_error("Failed to load image");
	}

	submit_object_background_for_text_sprite.setTexture(submit_object_background_for_text_texture);
	submit_object_background_for_text_sprite.setOrigin(submit_object_background_for_text_sprite.getGlobalBounds().width / 2, submit_object_background_for_text_sprite.getGlobalBounds().height / 2);
	submit_object_background_for_text_sprite.setPosition(1100, 300);
	submit_object_background_for_text_sprite.setScale(0.3f, 0.3f);

	setAddObjectBackground(window_width, window_height);

	add_object_background_for_text.setSize(sf::Vector2f(200, 50));
	add_object_background_for_text.setOrigin(add_object_background_for_text.getSize().x / 2, add_object_background_for_text.getSize().y / 2);
	add_object_background_for_text.setFillColor(sf::Color(255, 255, 255));
	add_object_background_for_text.setPosition(200, 100);


	add_object_background_for_text_2.setSize(sf::Vector2f(200, 50));
	add_object_background_for_text_2.setOrigin(add_object_background_for_text_2.getSize().x / 2, add_object_background_for_text_2.getSize().y / 2);
	add_object_background_for_text_2.setFillColor(sf::Color(255, 255, 255));
	add_object_background_for_text_2.setPosition(200, 200);


	add_object_background_for_text_3.setSize(sf::Vector2f(200, 50));
	add_object_background_for_text_3.setOrigin(add_object_background_for_text_3.getSize().x / 2, add_object_background_for_text_3.getSize().y / 2);
	add_object_background_for_text_3.setFillColor(sf::Color(255, 255, 255));
	add_object_background_for_text_3.setPosition(200, 300);


	add_object_background_for_text_4.setSize(sf::Vector2f(600, 50));
	add_object_background_for_text_4.setOrigin(add_object_background_for_text_4.getSize().x / 2, add_object_background_for_text_4.getSize().y / 2);
	add_object_background_for_text_4.setFillColor(sf::Color(255, 255, 255));
	add_object_background_for_text_4.setPosition(400, 400);


	add_object_background_for_text_5.setSize(sf::Vector2f(800, 50));
	add_object_background_for_text_5.setOrigin(add_object_background_for_text_5.getSize().x / 2, add_object_background_for_text_5.getSize().y / 2);
	add_object_background_for_text_5.setFillColor(sf::Color(255, 255, 255));
	add_object_background_for_text_5.setPosition(500, 500);

	setAddObjectText("name");
	setAddObjectText2("count");
	setAddObjectText3("price");
	setAddObjectText4("description");
	setAddObjectText5("path");
}

void AddObject::setAddObjectBackground(float window_width, float window_height)
{
	add_object_background.setSize(sf::Vector2f(window_width, window_height));
	add_object_background.setOrigin(add_object_background.getSize().x / 2, add_object_background.getSize().y / 2);
	add_object_background.setFillColor(sf::Color(160, 160, 160));
	add_object_background.setPosition(window_width / 2, window_height / 2);


}

void AddObject::setAddObjectText(std::string name)
{
	add_object_text.setFont(font);
	add_object_text.setString(name);
	add_object_text.setCharacterSize(20);
	add_object_text.setFillColor(sf::Color(0, 0, 0));
	add_object_text.setOrigin(add_object_text.getGlobalBounds().width / 2, add_object_text.getGlobalBounds().height / 2);
	add_object_text.setPosition(add_object_background_for_text.getPosition().x, add_object_background_for_text.getPosition().y);
}

void AddObject::setAddObjectText2(std::string count)
{
	add_object_text_2.setFont(font);
	add_object_text_2.setString(count);
	add_object_text_2.setCharacterSize(20);
	add_object_text_2.setFillColor(sf::Color(0, 0, 0));
	add_object_text_2.setOrigin(add_object_text_2.getGlobalBounds().width / 2, add_object_text_2.getGlobalBounds().height / 2);
	add_object_text_2.setPosition(add_object_background_for_text_2.getPosition().x, add_object_background_for_text_2.getPosition().y);
}

void AddObject::setAddObjectText3(std::string price)
{
	add_object_text_3.setFont(font);
	add_object_text_3.setString(price);
	add_object_text_3.setCharacterSize(20);
	add_object_text_3.setFillColor(sf::Color(0, 0, 0));
	add_object_text_3.setOrigin(add_object_text_3.getGlobalBounds().width / 2, add_object_text_3.getGlobalBounds().height / 2);
	add_object_text_3.setPosition(add_object_background_for_text_3.getPosition().x, add_object_background_for_text_3.getPosition().y);
}

void AddObject::setAddObjectText4(std::string description)
{
	add_object_text_4.setFont(font);
	add_object_text_4.setString(description);
	add_object_text_4.setCharacterSize(20);
	add_object_text_4.setFillColor(sf::Color(0, 0, 0));
	add_object_text_4.setOrigin(add_object_text_4.getGlobalBounds().width / 2, add_object_text_4.getGlobalBounds().height / 2);
	add_object_text_4.setPosition(add_object_background_for_text_4.getPosition().x, add_object_background_for_text_4.getPosition().y);
}

void AddObject::setAddObjectText5(std::string path)
{
	add_object_text_5.setFont(font);
	add_object_text_5.setString(path);
	add_object_text_5.setCharacterSize(20);
	add_object_text_5.setFillColor(sf::Color(0, 0, 0));
	add_object_text_5.setOrigin(add_object_text_5.getGlobalBounds().width / 2, add_object_text_5.getGlobalBounds().height / 2);
	add_object_text_5.setPosition(add_object_background_for_text_5.getPosition().x, add_object_background_for_text_5.getPosition().y);
}

AddObject::~AddObject()
{
	// Destructor
}