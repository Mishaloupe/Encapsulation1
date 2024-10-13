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

	float Norm() const;
	void Normalize();

	Vector2 DistVector(const Vector2& V2);
	float Distfloat(const Vector2& V2);

	bool operator == (const Vector2& V2);
};