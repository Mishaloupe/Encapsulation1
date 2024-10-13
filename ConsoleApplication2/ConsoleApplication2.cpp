#include <iostream>
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "World.h"



int main()
{
    int sim = 1;
    char ask = ' ';
    World world = World();
    world.Init();

    while (sim == 1) {
        if (world.Step() == 0) {
            sim = 0;
        }
        std::cin >> ask;
        if (ask == 's') {
            sim = 0;
        }
    }
    std::cout << "Simulation Finished";
    return 0;
}