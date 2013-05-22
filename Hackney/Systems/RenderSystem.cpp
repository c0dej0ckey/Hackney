#include "stdafx.h"
#include "RenderSystem.h"
#include "EntitySystem.h"
#include "..\Entities\Entity.h"
#include "SFML\Graphics.hpp"
#include "..\Components\RenderComponent.h"
#include "..\Components\MovementComponent.h"
#include "..\Entities\Player.h"
#include "..\Globals.h"
#include <vector>


using namespace std;
using namespace Components;

namespace Entities
{
	class Entity;
};

namespace Systems
{

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

	void RenderSystem::update()
	{
		window->clear();

		vector<Entities::Entity*> entities = EntitySystem::getEntities();
		vector<Entities::Entity*>::iterator iter = entities.begin();
		for(iter; iter < entities.end(); ++iter)
		{
		
			Components::RenderComponent *renderComponent = (Components::RenderComponent *)(*iter)->getComponent("RENDER");
			Components::MovementComponent *movementComponent = (Components::MovementComponent *)(*iter)->getComponent("MOVEMENT");
			Components::InputComponent *inputComponent = (Components::InputComponent *)(*iter)->getComponent("INPUT");

			renderComponent->update();
			//inputComponent->update();

		

			//movementComponent->update();
			double x = movementComponent->getXPosition();
			double y = movementComponent->getYPosition();
			x += movementComponent->getXDirection() * 30000 * Globals::getGameTime().getElapsedTime().asSeconds();
			y += movementComponent->getYDirection() * 30000 * Globals::getGameTime().getElapsedTime().asSeconds();
			movementComponent->setXPosition(x);
			movementComponent->setYPosition(y);
			//movementComponent->

			cout << x << endl;
			cout << Globals::getGameTime().getElapsedTime().asSeconds() << endl;
			cout << movementComponent->getXPosition();


			sf::Texture tex = renderComponent->getTexture();
			sf::Sprite sprite(tex);
			sprite.setPosition(movementComponent->getXPosition(), movementComponent->getYPosition());
			window->draw(sprite);
		}
	
		window->display();
	}

}