#include "stdafx.h"
#include "RenderSystem.h"
#include "EntitySystem.h"
#include "Entity.h"
#include "SFML\Graphics.hpp"
#include "RenderComponent.h"
#include "MovementComponent.h"
#include "Player.h"
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
	
	/*sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
	window->clear();
	window->draw(shape);
	window->display();*/

	window->clear();

	vector<Entity*> entities = EntitySystem::getEntities();
	vector<Entity*>::iterator iter = entities.begin();
	for(iter; iter < entities.end(); ++iter)
	{
		
		RenderComponent *renderComponent = (RenderComponent *)(*iter)->getComponent("RENDER");
		MovementComponent *movementComponent = (MovementComponent *)(*iter)->getComponent("MOVEMENT");
		sf::Sprite sprite(renderComponent->getTexture());
		sprite.setPosition(0,0);
		window->draw(sprite);
	}
	
	window->display();

}

void RenderSystem::update()
{

}