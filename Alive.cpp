#include "Alive.h"

Alive::Alive() : maxHealth(0), actualHealth(0) {

}

Alive::Alive(float _maxHealth, float _actualHealth) : maxHealth(_maxHealth), actualHealth(_actualHealth) {

}

float Alive::getMaxHealth() {
	return this->maxHealth;
}

float Alive::getActualHealth() {
	return this->actualHealth;
}

void Alive::takeDamage(float damage) {
	this->actualHealth -= damage;
}