#include "HugeBusinessman.h"
#include "CoinSystem.h"
#include <iostream>

HugeBusinessman::HugeBusinessman() : 
    Entity("HugeBusinessman", 90, 12, "Инвестиция", 135) {}

void HugeBusinessman::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (восстанавливает 35 здоровья)" << std::endl;
        health += 35;
        if (health > 90) health = 90; 
}
