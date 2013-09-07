#include "stdafx.h"
#include "SystemsManager.h"
#include "..\RenderWindow.h"
#include "EntitySystem.h"
#include "MovementSystem.h"
#include "RenderSystem.h"
#include "InputSystem.h"

namespace Systems
{

vector<ISystem*> systems;

SystemsManager::SystemsManager(RenderWindow & window)
{
	this->renderWindow = &window;
}


SystemsManager::~SystemsManager(void)
{
}

void SystemsManager::initializeSystems()
{

	EntitySystem *entitySystem = new EntitySystem();
	RenderSystem *renderSystem = new RenderSystem(*renderWindow);
	MovementSystem *movementSystem = new MovementSystem();
	InputSystem *inputSystem = new InputSystem();

	systems.push_back(entitySystem);
	systems.push_back(renderSystem);
	systems.push_back(movementSystem);
	systems.push_back(inputSystem);
}

void SystemsManager::update()
{
	for(vector<ISystem*>::iterator iter = systems.begin(); iter != systems.end(); iter++)
	{
		(*iter)->update();
	}
}

}