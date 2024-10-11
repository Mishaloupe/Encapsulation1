#include "Player.h"
#include <iostream>
#include <string>

Player::Player() : Entity(Vector2(0, 0)), Alive(0, 0), AMovable(Vector2(0, 0), 0) {

}

Player::Player(Vector2 _pos, float _maxHealth, float _actualHealth, Vector2 _direction, float _speed) : Entity(_pos), Alive(_maxHealth, _actualHealth), AMovable(_direction, _speed) {
	std::cout << "Player just created at x = " << std::to_string(_pos.GetX()) << " and y = " << std::to_string(_pos.GetY()) << " with " << std::to_string(_actualHealth) << " with direction x = " << std::to_string(_direction.GetX()) << " and y = " << std::to_string(_direction.GetY()) << std::endl;
}



void Player::takeDamage(float _damage) {
	std::cout << "Player just die" << std::endl;
}

void Player::Movement() {
	std::cout << "Player move to x = " << std::to_string(pos.GetX()) << " and y = " << std::to_string(pos.GetY()) << std::endl;
}

void Player::attack(Alive* Attacked) {
	Attacked->takeDamage(10);
	std::cout << "Player just attacked." << std::endl;
}