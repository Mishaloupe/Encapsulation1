#pragma once
#include "Alive.h"

class IAttacker {
public:
	virtual void attack(Alive* Attacked) = 0;
};