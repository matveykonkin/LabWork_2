#include "Enemy/EnemyFactory.h"
#include <iostream>

void demoBattle(const std::vector<Entity*>& enemies) {
    std::cout << "=== НАЧАЛО БОЯ ===" << std::endl;
    for (auto enemy : enemies) {
        std::cout << enemy->getName() << " (" 
                  << enemy->getHealth() << " HP)" << std::endl;
    }
}

int main() {
    std::cout << "Лёгкие враги:" << std::endl;
    auto easy = EnemyFactory::createEasyEnemies();
    demoBattle(easy);
    
    std::cout << "\nТяжёлые враги:" << std::endl;
    auto hard = EnemyFactory::createHardEnemies();
    demoBattle(hard);
    
    // Очистка
    for (auto enemy : easy) delete enemy;
    for (auto enemy : hard) delete enemy;
    
    return 0;
}