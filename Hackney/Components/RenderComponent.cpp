#include "stdafx.h"
#include "RenderComponent.h"
#include "IComponent.h"
#include "MovementComponent.h"

namespace Components
{


RenderComponent::RenderComponent(Entities::Entity* owner, string filepath) : IComponent(owner)
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

}