#pragma once
#include "Vector2.h"

class AMovable {
public:
	Vector2 direction;
	float speed;

	AMovable();
	AMovable(Vector2 direction, float speed);

	virtual void SetDirection(Vector2);
	virtual void SetSpeed(float);
	virtual void Movement() = 0;
};