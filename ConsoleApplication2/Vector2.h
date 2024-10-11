#pragma once

class Vector2 {
private:
	float x;
	float y;
public:

	Vector2();
	Vector2(float x, float y);

	void SetX(float);
	void SetY(float);

	float GetX() const;
	float GetY() const;

	Vector2 operator+(const Vector2& _rigth);
};