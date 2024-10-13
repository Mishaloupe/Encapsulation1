#include "World.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "player.h"
#include <iostream>
#include <string>

World::World(){

}

void World::Init() {
    BreakableObject* BreakObj = new BreakableObject(-10, -10, 1, 1);
    Mob* ennemy = new Mob(10, 10, 20, 20, Vector2(0, 1), 1);
    Player* character = new Player(Vector2(0, 0), 10, 10, Vector2(0, 1), 1);

    AllEntity.push_back(BreakObj);
    AllEntity.push_back(ennemy);
    AllEntity.push_back(character);
}

int World::Step() {
    Player* character = nullptr;
    BreakableObject* BreakObj = nullptr;
    Mob* ennemy = nullptr;

    for (auto E : AllEntity) {
        if (Player* c = dynamic_cast<Player*>(E)) {
            character = c;
        }
        if (BreakableObject* bo = dynamic_cast<BreakableObject*>(E)) {
            BreakObj = bo;
        }
        if (Mob* e = dynamic_cast<Mob*>(E)) {
            ennemy = e;
        }
    }
    if (ennemy and ennemy->getActualHealth() > 0) {
        Vector2 BreakObjPos = BreakObj->GetPos();
        Vector2 ennemyPos = ennemy->GetPos();

        Vector2 direct = ennemyPos.DistVector(BreakObjPos);

        if (not(direct == Vector2(0, 0))) {
            direct.Normalize();
            ennemy->SetDirection(direct);
            ennemy->Movement();
        }
    }
    if (character) {
        if (ennemy->getActualHealth() > 0) {
            Vector2 ennemyPos = ennemy->GetPos();
            Vector2 characterPos = character->GetPos();

            float range = characterPos.Distfloat(ennemyPos);

            Vector2 direct = characterPos.DistVector(ennemyPos);

            if (not(direct == Vector2(0, 0))) {
                direct.Normalize();

                character->SetDirection(direct);
                character->Movement();
            }
            std::cout << "range : " + std::to_string(range) << std::endl;
            if (range <= 1) {
                character->attack(ennemy);
            }
        }
        else {
            if (BreakObj->getActualHealth() > 0) {

                float range = character->GetPos().Distfloat(BreakObj->GetPos());

                Vector2 direct = character->GetPos().DistVector(BreakObj->GetPos());

                if (not(direct == Vector2(0, 0))) {
                    direct.Normalize();

                    character->SetDirection(direct);
                    character->Movement();
                }
                std::cout << "range : " + std::to_string(range) << std::endl;
                if (range <= 1) {
                    character->attack(BreakObj);
                    return 0;
                }
            }
            else {
                return 0;
            }
        }
    }
    return 1;
}