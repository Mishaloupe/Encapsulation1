#pragma once
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker {
public:
	Player();
	Player(Vector2 pos, float maxHealth, float actualHealth, Vector2 movement, float speed);

	void takeDamage(float dmg) override;
	void Movement() override;
	void attack(Alive*) override;
};