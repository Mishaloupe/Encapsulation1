#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive {
public:
	BreakableObject();
	BreakableObject(float x, float y, float maxHealth, float actualHealth);
	void takeDamage(float dmg) override;
};