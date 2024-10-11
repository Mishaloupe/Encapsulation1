#pragma once

class Alive {
private:
	float maxHealth;
	float actualHealth;
public:
	Alive();
	Alive(float maxHealth, float actualHealth);

	virtual float getMaxHealth();
	virtual float getActualHealth();
	virtual void takeDamage(float dmg);
};