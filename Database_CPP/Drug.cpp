#include "Drug.h"

Drug::Drug(int count, float price, const std::string& name, const std::string& description, const std::string& sprite) : count(count), price(price), name(name), description(description), sprite(sprite)
{
	setBackground();
	if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
	{
		throw std::runtime_error("Failed to load image");
	}

	text.setFont(font);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Black);
	text.setString(name + " " );
	text.setOrigin(text.getGlobalBounds().width / 2, text.getGlobalBounds().height / 2);
	text.setPosition(background.getPosition().x, background.getPosition().y);
}

void Drug::setBackground()
{
	background.setSize(sf::Vector2f(280, 100));
	background.setOrigin(background.getSize().x / 2, background.getSize().y / 2);
	background.setFillColor(sf::Color(33, 133, 104));
	background.setOutlineThickness(0.0f);
}

void Drug::setBackgroundPosition(float x, float y)
{
	background.setPosition(x, y);
}

void Drug::setOutlineThicknessForBackground()
{
	background.setOutlineThickness(3.0f);
	background.setOutlineColor(sf::Color::Black);
}

void Drug::unsetOutlineThicknessForBackground()
{
	background.setOutlineThickness(0.0f);
}

Drug::~Drug()
{
	// Destructor implementation (if needed)
}