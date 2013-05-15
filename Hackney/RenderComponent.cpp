#include "stdafx.h"
#include "RenderComponent.h"


RenderComponent::RenderComponent(string filepath)
{
	texture.loadFromFile(filepath);
}


RenderComponent::~RenderComponent(void)
{
}

sf::Texture RenderComponent::getTexture()
{
	return texture;
}

void RenderComponent::setTexture(sf::Texture texture)
{
	this->texture = texture;
}

void RenderComponent::update()
{

}