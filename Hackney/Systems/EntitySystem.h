#pragma once
#include "..\Entities\Entity.h"
#include "ISystem.h"


#include <vector>

using namespace std;

namespace Systems
{

class EntitySystem : ISystem
{
public:
	EntitySystem(void);
	~EntitySystem(void);
	void static registerEntity(Entities::Entity *entity);
	void static unregisterEntity(Entities::Entity *entity);
	void static getEntityById(unsigned int id);
	vector<Entities::Entity*> static getEntities();
	virtual void draw();
	virtual void update();
private:
	static vector<Entities::Entity*> entities;
};

}