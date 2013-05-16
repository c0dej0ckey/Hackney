#include "stdafx.h"
#include "RenderComponent.h"


RenderComponent::RenderComponent(string filepath)
{
	this->texture = new sf::Texture();
	texture->loadFromFile(filepath);
}


RenderComponent::~RenderComponent(void)
{
	delete texture;
}

sf::Texture& RenderComponent::getTexture()
{
	return (*texture);
}

void RenderComponent::setTexture(sf::Texture *texture)
{
	this->texture = texture;
}

void RenderComponent::update()
{

}