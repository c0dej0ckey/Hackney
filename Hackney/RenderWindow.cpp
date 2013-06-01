#include "stdafx.h"
#include "RenderWindow.h"



RenderWindow::RenderWindow(sf::VideoMode videoMode, string title) : sf::RenderWindow(videoMode, title)
{
}


RenderWindow::~RenderWindow(void)
{
}

void RenderWindow::draw(Entities::Entity* entity)
{
	sf::Sprite sprite;

	Components::RenderComponent *renderComponent = (Components::RenderComponent *)entity->getComponent("RENDER");
	Components::MovementComponent *movementComponent = (Components::MovementComponent *)entity->getComponent("MOVEMENT");
	if(renderComponent != NULL && movementComponent != NULL)
	{
		sprite.setTexture(renderComponent->getTexture());
		sprite.setPosition((float)movementComponent->getXPosition(), (float)movementComponent->getYPosition());
		sf::RenderWindow::draw(sprite);
	}

	
}
