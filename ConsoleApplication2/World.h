#pragma once
#include "Entity.h"
#include <vector>

class World {
public:
	std::vector<Entity*> AllEntity = {};

	World();

	void Init();
	int Step();
};