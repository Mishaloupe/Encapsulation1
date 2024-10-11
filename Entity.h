#pragma once
#include "Vector2.h"

class Entity {
protected:
	Vector2 pos;
public:
	Entity();
	Entity(Vector2 pos);

	Vector2 GetPos() const;
	void SetPos(Vector2);
};