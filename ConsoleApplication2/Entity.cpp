#include "Entity.h"

Entity::Entity() : pos(0, 0) {

}

Entity::Entity(Vector2 _pos) : pos(_pos) {

}

void Entity::SetPos(Vector2 vec) {
	this->pos = vec;
}

Vector2 Entity::GetPos() const {
	return this->pos;
}