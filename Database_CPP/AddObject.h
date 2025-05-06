#pragma once
#include <iostream>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class AddObject
{
private:
	sf::Texture submit_object_background_for_text_texture;
	sf::Sprite submit_object_background_for_text_sprite;
	sf::Font font;
	sf::RectangleShape add_object_background;
	sf::RectangleShape add_object_background_for_text;
	sf::RectangleShape add_object_background_for_text_2;
	sf::RectangleShape add_object_background_for_text_3;
	sf::RectangleShape add_object_background_for_text_4;
	sf::RectangleShape add_object_background_for_text_5;
	sf::Text add_object_text;                              
	sf::Text add_object_text_2;
	sf::Text add_object_text_3;
	sf::Text add_object_text_4;
	sf::Text add_object_text_5;	

	void setAddObjectBackground(float window_width, float window_height);
public:
	AddObject(float window_width, float window_height);
	void setAddObjectText(std::string name);
	void setAddObjectText2(std::string count);
	void setAddObjectText3(std::string price);
	void setAddObjectText4(std::string description);
	void setAddObjectText5(std::string path);
	const sf::RectangleShape& getAddObjectBackground() const { return add_object_background; }
	const sf::RectangleShape& getAddObjectBackgroundForText() const { return add_object_background_for_text; }
	const sf::RectangleShape& getAddObjectBackgroundForText2() const { return add_object_background_for_text_2; }
	const sf::RectangleShape& getAddObjectBackgroundForText3() const { return add_object_background_for_text_3; }
	const sf::RectangleShape& getAddObjectBackgroundForText4() const { return add_object_background_for_text_4; }
	const sf::RectangleShape& getAddObjectBackgroundForText5() const { return add_object_background_for_text_5; }
	const sf::Sprite& getSubmitObjectBackgroundForTextSprite() const { return submit_object_background_for_text_sprite; }
	const sf::Text& getAddObjectText() const { return add_object_text; }
	const sf::Text& getAddObjectText2() const { return add_object_text_2; }
	const sf::Text& getAddObjectText3() const { return add_object_text_3; }
	const sf::Text& getAddObjectText4() const { return add_object_text_4; }
	const sf::Text& getAddObjectText5() const { return add_object_text_5; }
	~AddObject();
};

