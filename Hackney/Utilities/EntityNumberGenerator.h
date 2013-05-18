#pragma once

namespace Utilities
{

class EntityNumberGenerator
{
public:
	EntityNumberGenerator(void);
	~EntityNumberGenerator(void);
	static unsigned int getId();

private:
	const static unsigned int RANDOM_MAX_RANGE = 1000000;
};

}