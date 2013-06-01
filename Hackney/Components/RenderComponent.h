#pragma once
#include "IComponent.h"
#include "SFML\Graphics.hpp"

using namespace std;

namespace Components
{

class RenderComponent : public IComponent
{
public:
	RenderComponent(Entities::Entity* owner, string filepath);
	~RenderComponent(void);
	sf::Texture & getTexture();
	void setTexture(sf::Texture *texture);
	virtual void update();

private:
	sf::Texture *texture;
};

}