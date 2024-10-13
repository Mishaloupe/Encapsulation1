#include "Vector2.h"
#include <sstream>
#include <iostream>
#include <math.h>

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

float Vector2::Norm() const {
    float VNorm = std::abs(std::sqrt(pow(this->x,2) + pow(this->y, 2)));
    return VNorm;
}

void Vector2::Normalize() {
    float VNorm = this->Norm();
    this->x /= VNorm;
    this->y /= VNorm;
}

Vector2 Vector2::DistVector(const Vector2& V2) {
    return Vector2((V2.GetX() - this->GetX()), (V2.GetY() - this->GetY()));
}

float Vector2::Distfloat(const Vector2& V2) {
    return std::sqrt(pow(V2.GetX() - this->GetX(),2) + pow(V2.GetY() - this->GetY(),2));
}

bool Vector2::operator==(const Vector2& V2) {
    bool tmp(this->GetX() == V2.GetX() and this->GetY() == V2.GetY());
    return tmp;
}