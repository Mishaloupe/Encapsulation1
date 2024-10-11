#pragma once
#include "Vector2.h"

class AMovable {
private:
	Vector2 direction;
	float speed;
public:
	AMovable();
	AMovable(Vector2 direction, float speed);

	virtual void SetDirection(Vector2);
	virtual void SetSpeed(float);
	virtual void Movement(Vector2, float) = 0;
};