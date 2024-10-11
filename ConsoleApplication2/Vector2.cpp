#include "Vector2.h"
#include <sstream>
#include <iostream>

Vector2::Vector2() : x(0), y(0) {

}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

void Vector2::SetX(float xx) {
	this->x = xx;
}

void Vector2::SetY(float yy) {
	this->y = yy;
}

float Vector2::GetX() const {
	return this->x;
}

float Vector2::GetY() const {
	return this->y;
}

Vector2 Vector2::operator+(const Vector2& _rigth) {
	Vector2 tmp(this->x + _rigth.GetX(), this->y + _rigth.GetY());

	return tmp;
}