#include "AMovable.h"

AMovable::AMovable() : direction(0, 0), speed(0) {

}

AMovable::AMovable(Vector2 _direction, float _speed) : direction(_direction), speed(_speed) {

}

void AMovable::SetDirection(Vector2 dir) {
	this->direction = dir;
}

void AMovable::SetSpeed(float vit) {
	this->speed = vit;
}