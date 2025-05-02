#include "Enemy/EnemyFactory.h"
#include <iostream>

void demoBattle(const std::vector<std::unique_ptr<Entity>>& enemies) {
    std::cout << "=== НАЧАЛО БОЯ ===" << std::endl;
    for (const auto& enemy : enemies) {
        std::cout << enemy->getName() << " (" 
                  << enemy->getHealth() << " HP)" << std::endl;
    }
}