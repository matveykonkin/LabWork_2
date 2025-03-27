#include "Banker.h"
#include "Player.h"
#include <iostream>

class Banker : public Entity {
    public:
        Banker() : Entity("Banker", 85, 11, "Кредит", 130) {}
    
        void Banker::useUniqueAbility(Player player) {
            int loanAmount = 50 + rand() % 100;
            std::cout << name << " использует способность: " << uniqueAbility << " (временно увеличивает монеты)" << std::endl;
            player.addCoins(loanAmount);
        }
    };