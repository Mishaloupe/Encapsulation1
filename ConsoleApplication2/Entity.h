#pragma once
#include "Vector2.h"

class Entity {
public:
	Vector2 pos;

	Entity();
	Entity(Vector2 pos);

	Vector2 GetPos() const;
	virtual void SetPos(Vector2);
};