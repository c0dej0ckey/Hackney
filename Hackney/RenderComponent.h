#pragma once
#include "icomponent.h"
#include "SFML\Graphics.hpp"

using namespace std;

class RenderComponent : public IComponent
{
public:
	RenderComponent(string filepath);
	~RenderComponent(void);
	sf::Texture& getTexture();
	void setTexture(sf::Texture *texture);
	virtual void update();

private:
	sf::Texture *texture;
};

