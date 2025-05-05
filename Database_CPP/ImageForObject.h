#pragma once
#include <iostream>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class ImageForObject
{
private:
	sf::Texture image_for_Object_texture;
	sf::Sprite image_for_Object_sprite;
public:
	ImageForObject();
	void setImageForObjectTexture(const std::string& sprite);
	const sf::Texture& getImageForObjectTexture() const;
	const sf::Sprite& getImageForObjectSprite() const;
	~ImageForObject();
};

