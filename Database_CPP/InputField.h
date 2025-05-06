#pragma once
#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Font.hpp>

class InputField
{
private:
	sf::RectangleShape input_field;
	sf::Text input_text;
	sf::Font font;
public:
	InputField();
	sf::Text& getText();
	sf::RectangleShape& getBackground();
	void setText(std::wstring user_input);
	~InputField();
};

