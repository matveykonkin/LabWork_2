#pragma once
#include "Enemy/WeakEnemy.h"
#include "Enemy/StrongEnemy.h"
#include <vector>
#include <memory>

class EnemyFactory {
public:
    static std::vector<std::unique_ptr<Entity>> createEasyEnemies() {
        std::vector<std::unique_ptr<Entity>> enemies;
        enemies.push_back(std::make_unique<WeakZombiStudent>());
        enemies.push_back(std::make_unique<WeakZombiStudent>());
        return enemies;
    }

    static std::vector<std::unique_ptr<Entity>> createHardEnemies() {
        std::vector<std::unique_ptr<Entity>> enemies;
        enemies.push_back(std::make_unique<EliteZombiProfessor>());
        return enemies;
    }
};