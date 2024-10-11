#include <iostream>
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include "StaticObject.h"
#include "BreakableObject.h"



int main()
{
    float x = 0;
    float y = 0;
    Vector2 A = Vector2(x, y);

    BreakableObject him = BreakableObject(x, y, 20, 20);
    him.takeDamage(10);
    return 0;
}