#pragma once
#include "icomponent.h"
#include "SFML\Graphics.hpp"

using namespace std;

class RenderComponent :
	public IComponent
{
public:
	RenderComponent(string filepath);
	~RenderComponent(void);
	sf::Image getTexture();
	void setTexture(sf::Image texture);
	virtual void update();

private:
	sf::Image texture;
};

