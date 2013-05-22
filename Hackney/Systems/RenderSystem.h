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
		void update();

	private:
		sf::RenderWindow *window;
	};

}