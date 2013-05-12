#include "stdafx.h"
#include "RenderSystem.h"
#include "SFML\Graphics.hpp"


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
	
	sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
	window->clear();
	window->draw(shape);
	window->display();
}

void RenderSystem::update()
{

}