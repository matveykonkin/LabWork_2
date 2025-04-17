#pragma once
#include "WeakEnemy.h"
#include "StrongEnemy.h"
#include <vector>

class EnemyFactory {
public:
    static std::vector<Entity*> createEasyEnemies() {
        return {
            new WeakZombiStudent(),
            new WeakZombiStudent(),
            new WeakZombiStudent()
        };
    }

    static std::vector<Entity*> createHardEnemies() {
        return {
            new EliteZombiProfessor(),
            new EliteZombiProfessor(),
        };
    }
};