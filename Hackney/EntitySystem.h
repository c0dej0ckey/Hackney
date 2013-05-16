#pragma once
#include "Entity.h"
#include "ISystem.h"

#include <vector>

using namespace std;

class EntitySystem : ISystem
{
public:
	EntitySystem(void);
	~EntitySystem(void);
	void static registerEntity(Entity *entity);
	void static unregisterEntity(Entity *entity);
	void static getEntityById(unsigned int id);
	vector<Entity*> static getEntities();
	virtual void draw();
	virtual void update();
private:
	static vector<Entity*> entities;
};

