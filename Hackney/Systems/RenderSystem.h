#pragma once
#include "ISystem.h"
#include "SFML\Graphics.hpp"
#include "../RenderWindow.h"

namespace Systems
{
	class RenderSystem : ISystem
	{
	public:
		RenderSystem(void);
		RenderSystem(RenderWindow &window);
		~RenderSystem(void);
		void update();

	private:
		RenderWindow *window;
	};

}