#include "Official.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>  
Official::Official() : 
    Entity("Official", 80, 10, "Коррупция", 125) {}

void Official::useUniqueAbility(Entity* target) {
    int stolenCoins = 30 + rand() % 70;  
    std::cout << name << " использует способность: " << uniqueAbility 
              << " (крадёт монеты у противника)" << std::endl;

    if (Player* enemyPlayer = dynamic_cast<Player*>(target)) {
        enemyPlayer->spendCoins(stolenCoins);  
    } else {
        std::cerr << "Цель не является игроком! Способность не сработала.\n";
    }
}