#include "stdafx.h"
#include "RenderSystem.h"
#include "EntitySystem.h"
#include "Entity.h"
#include "SFML\Graphics.hpp"
#include "RenderComponent.h"
#include "MovementComponent.h"
#include "Player.h"
#include "Globals.h"
#include <vector>


using namespace std;

RenderSystem::RenderSystem(void)
{
}

RenderSystem::RenderSystem(sf::RenderWindow &window)
{
	this->window = &window;
}

RenderSystem::~RenderSystem(void)
{
}

void RenderSystem::draw()
{
	sf::Clock clock;

	window->clear();

	vector<Entity*> entities = EntitySystem::getEntities();
	vector<Entity*>::iterator iter = entities.begin();
	for(iter; iter < entities.end(); ++iter)
	{
		
		RenderComponent *renderComponent = (RenderComponent *)(*iter)->getComponent("RENDER");
		MovementComponent *movementComponent = (MovementComponent *)(*iter)->getComponent("MOVEMENT");
		InputComponent *inputComponent = (InputComponent *)(*iter)->getComponent("INPUT");

		renderComponent->update();
		inputComponent->update();

		

		//movementComponent->update();
		double x = movementComponent->getXPosition();
		double y = movementComponent->getYPosition();
		x += movementComponent->getXDirection() * 300 * Globals::getGameTime().getElapsedTime().asSeconds();
		y += movementComponent->getYDirection() * 300 * Globals::getGameTime().getElapsedTime().asSeconds();
		movementComponent->setXPosition(x);
		movementComponent->setYPosition(y);
		//movementComponent->

		sf::Texture tex = renderComponent->getTexture();
		sf::Sprite sprite(tex);
		sprite.setPosition(movementComponent->getXPosition(), movementComponent->getYPosition());
		window->draw(sprite);
	}
	
	window->display();

}

void RenderSystem::update()
{

}