#pragma once

class Alive {
public:
	float maxHealth;
	float actualHealth;

	Alive();
	Alive(float maxHealth, float actualHealth);

	virtual float getMaxHealth();
	virtual float getActualHealth();
	virtual void takeDamage(float dmg);
};