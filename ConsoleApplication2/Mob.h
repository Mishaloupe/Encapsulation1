#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable {
public:
	Mob();
	Mob(float x, float y, float maxHealth, float actualHealth, Vector2 movement, float speed);

	void takeDamage(float dmg) override;
	void Movement() override;
};