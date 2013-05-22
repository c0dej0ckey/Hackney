#include "stdafx.h"
#include "InputSystem.h"
#include "EntitySystem.h"
#include "..\Components\InputComponent.h"
#include <vector>

using namespace std;

namespace Systems
{

InputSystem::InputSystem(void)
{
}


InputSystem::~InputSystem(void)
{
}

void InputSystem::update()
{
	vector<Entities::Entity*> entities =  EntitySystem::getEntities();
	for(vector<Entities::Entity*>::iterator iter = entities.begin(); iter < entities.end(); iter++)
	{
		Components::InputComponent *inputComponent  = (Components::InputComponent *)(*iter)->getComponent("INPUT");
		if(inputComponent != NULL)
		{
			inputComponent->update();
		}
		
	}

	


}

}