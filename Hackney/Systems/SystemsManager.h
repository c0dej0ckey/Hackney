#pragma once
#include "ISystem.h"
#include "../RenderWindow.h"

#include <vector>

using namespace std;


namespace Systems
{

class SystemsManager
{
public:
	SystemsManager(RenderWindow & window);
	~SystemsManager(void);
	void initializeSystems();
	void update();

private:
	vector<ISystem*> systems;
	RenderWindow *renderWindow;

};

}