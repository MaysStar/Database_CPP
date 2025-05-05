#include "InputField.h"

InputField::InputField()
{
    input_field.setSize(sf::Vector2f(180, 38));
    input_field.setOrigin(input_field.getGlobalBounds().width / 2, input_field.getGlobalBounds().height / 2);
    input_field.setPosition(113, 52);
    input_field.setFillColor(sf::Color(153, 159, 161));
    input_field.setOutlineColor(sf::Color::Black);
    input_field.setOutlineThickness(3);

    if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
    {
        throw std::runtime_error("Failed to load image");
    }

    input_text.setFont(font);
    input_text.setOrigin(input_text.getGlobalBounds().width / 2, input_text.getGlobalBounds().height / 2);
    input_text.setCharacterSize(24);
    input_text.setFillColor(sf::Color::Black);
    input_text.setPosition(input_field.getPosition().x, input_field.getPosition().y - 5);
}

sf::Text& InputField::getText()
{
	return input_text;
}

sf::RectangleShape& InputField::getBackground()
{
	return input_field;
}

void InputField::setText(std::wstring user_input)
{
	input_text.setString(user_input);
	input_text.setOrigin(input_text.getGlobalBounds().width / 2, input_text.getGlobalBounds().height / 2);
	input_text.setPosition(input_field.getPosition().x, input_field.getPosition().y - 5);
}

InputField::~InputField()
{

}