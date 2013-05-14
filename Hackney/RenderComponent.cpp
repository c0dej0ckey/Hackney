#include "stdafx.h"
#include "RenderComponent.h"


RenderComponent::RenderComponent(string filepath)
{
	texture.loadFromFile(filepath);
}


RenderComponent::~RenderComponent(void)
{
}

sf::Image RenderComponent::getTexture()
{
	return texture;
}

void RenderComponent::setTexture(sf::Image texture)
{
	this->texture = texture;
}

void RenderComponent::update()
{

}