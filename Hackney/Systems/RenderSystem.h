#pragma once
#include "ISystem.h"
#include "SFML\Graphics.hpp"

namespace Systems
{
	class RenderSystem : ISystem
	{
	public:
		RenderSystem(void);
		RenderSystem(sf::RenderWindow &window);
		~RenderSystem(void);
		virtual void draw();
		virtual void update();

	private:
		sf::RenderWindow *window;
	};

}