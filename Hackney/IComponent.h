#pragma once
class IComponent
{
public:
	IComponent(void);
	~IComponent(void);
	virtual void update();
};

