#include "BreakableObject.h"
#include <iostream>
#include <string>

BreakableObject::BreakableObject() : Entity(Vector2(0, 0)) {

}

BreakableObject::BreakableObject(float _x, float _y, float _maxHealth, float _actualHealth) : Entity(Vector2(_x, _y)), Alive(_maxHealth, _actualHealth) {
	std::cout << "Breakable Object just created at x = " << std::to_string(_x) << " and y = " << std::to_string(_y) << " with " << std::to_string(_maxHealth) << std::endl;
}

void BreakableObject::takeDamage(float damage) {
	std::cout << "Breakable Object just broke" << std::endl;
}