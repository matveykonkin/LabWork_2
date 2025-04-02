#include "Official.h"
#include "Player.h"
#include <iostream>

class Official : public Entity {
    public:
        Official() : Entity("Official", 80, 10, "Коррупция", 125) {}
    
        void Official::useUniqueAbility(Player player, Entity* target) {
            int stolenCoins = 30 + rand() % 70;
            std::cout << name << " использует способность: " << uniqueAbility << " (крадёт монеты у противника)" << std::endl;
            if (auto* enemyPlayer = dynamic_cast<Player*>(target)) {
                enemyPlayer->spendCoins(stolenCoins);
                player.addCoins(stolenCoins);
            }
        }
    };