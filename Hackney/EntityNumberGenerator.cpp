#include "stdafx.h"
#include "EntityNumberGenerator.h"
#include <random>

using namespace std;

EntityNumberGenerator::EntityNumberGenerator(void)
{
}


EntityNumberGenerator::~EntityNumberGenerator(void)
{
}

unsigned int EntityNumberGenerator::getId()
{
	unsigned int id = rand() % RANDOM_MAX_RANGE;
	return id;
}
