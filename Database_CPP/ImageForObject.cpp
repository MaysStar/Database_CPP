#include "ImageForObject.h"

ImageForObject::ImageForObject()
{
	if (!image_for_Object_texture.loadFromFile("C:\\programing\\NULP_OOP\\Database_CPP\\source\\paracetamol.jpg"))
	{
		throw std::runtime_error("Failed to load image");
	}
}

const sf::Texture& ImageForObject::getImageForObjectTexture() const
{
	return image_for_Object_texture;
}

const sf::Sprite& ImageForObject::getImageForObjectSprite() const
{
	return image_for_Object_sprite;
}

void ImageForObject::setImageForObjectTexture(const std::string& sprite)
{
	if (!image_for_Object_texture.loadFromFile(sprite))
	{
		throw std::runtime_error("Failed to load image");
	}
	image_for_Object_sprite.setTexture(image_for_Object_texture);
	image_for_Object_sprite.setOrigin(image_for_Object_sprite.getGlobalBounds().width / 2, image_for_Object_sprite.getGlobalBounds().height / 2);
	image_for_Object_sprite.setPosition(385, 87);
	image_for_Object_sprite.setScale(0.3f, 0.3f);
}

ImageForObject::~ImageForObject()
{
	// Destructor
}