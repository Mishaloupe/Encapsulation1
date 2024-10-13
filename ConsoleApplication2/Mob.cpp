#include "Mob.h"
#include <iostream>
#include <string>

Mob::Mob() : Entity(Vector2(0, 0)), Alive(0, 0), AMovable(Vector2(0, 0), 0) {

}

Mob::Mob(float _x, float _y, float _maxHealth, float _actualHealth, Vector2 _direction, float _speed) : Entity(Vector2(_x, _y)), Alive(_maxHealth, _actualHealth), AMovable(_direction, _speed) {
	std::cout << "Mob just created at x = " << std::to_string(_x) << " and y = " << std::to_string(_y) << " with " << std::to_string(_actualHealth) << " with direction x = " << std::to_string(_direction.GetX()) << " and y = " << std::to_string(_direction.GetY()) << std::endl;
}



void Mob::takeDamage(float _damage) {
	this->actualHealth -= _damage;
	if (actualHealth <= 0) {
		std::cout << "Mob just died" << std::endl;
	}
}

void Mob::Movement() {
	Vector2 ennemyPos = this->GetPos();
	this->SetPos(Vector2(ennemyPos.GetX() + this->direction.GetX() * speed, ennemyPos.GetY() + this->direction.GetY() * speed));
	std::cout << "Mob move to x = " << std::to_string(pos.GetX()) << " and y = " << std::to_string(pos.GetY()) << std::endl;
}