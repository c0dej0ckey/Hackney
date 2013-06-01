#pragma once

#include "SFML\Graphics.hpp"
#include "Components\RenderComponent.h"
#include "Components\MovementComponent.h"

namespace Entities
{
	class Entity;
}



class RenderWindow : public sf::RenderWindow
{
public:
	RenderWindow(sf::VideoMode videoMode, string title);
	void draw(Entities::Entity *);
	~RenderWindow(void);
};

