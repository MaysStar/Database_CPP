#pragma once
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Font.hpp>

class Drug
{
private:
	int count;
	float price;
	std::string name;
	std::string description;
	std::string sprite;
	sf::RectangleShape background;
	sf::Text text;
	sf::Font font;
public:
	Drug(int count, float price, const std::string& name, const std::string& description, const std::string& sprite);
	int getCount() const { return count; }
	float getPrice() const { return price; }
	const std::string& getName() const { return name; }
	const std::string& getDescription() const { return description; }
	const std::string& getSprite() const { return sprite; }
	const sf::RectangleShape& getBackground() const { return background; }
	const sf::Text& getText() const { return text; }
	void setCount(int newCount) { count = newCount; }
	void setPrice(float newPrice) { price = newPrice; }
	void setName(const std::string& newName) { name = newName; }
	void setDescription(const std::string& newDescription) { description = newDescription; }
	void setBackground();
	void setBackgroundPosition(float x = 160, float y = 0);
	void setOutlineThicknessForBackground();
	void unsetOutlineThicknessForBackground();
	~Drug();
};

