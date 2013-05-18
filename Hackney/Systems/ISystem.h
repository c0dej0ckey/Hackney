#pragma once

namespace Systems
{

class ISystem
{
public:
	ISystem(void);
	virtual void update();
	virtual void draw();
	~ISystem(void);
};

}