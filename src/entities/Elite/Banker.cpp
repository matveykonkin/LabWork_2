#include "Elite/Banker.h"
#include "core/Player.h"
#include <iostream>
#include <cstdlib>  

Banker::Banker() : 
    Entity("Banker", 85, 11, "Кредит", 130) {}  

void Banker::useUniqueAbility(Entity* target) {
    Player* player = dynamic_cast<Player*>(target);
    if (!player) {
        std::cerr << "Способность работает только с игроком!\n";
        return;
    }

    int loanAmount = 50 + rand() % 100;
    std::cout << name << " использует способность: " << uniqueAbility 
              << " (временно увеличивает монеты)" << std::endl;
    player->addCoins(loanAmount);  
}