#include "SmallBusinessman.h"
#include "Player.h"
#include <iostream>

class SmallBusinessman : public Entity {
    public:
        SmallBusinessman() : Entity("Small Businessman", 75, 9, "Торговля", 115) {}
    
        void SmallBusinessman::useUniqueAbility(Player player) {
            std::cout << name << " предлагает сделку:\n";
            std::cout << "1. 50 монет → +15 атаки\n2. 30 монет → +25 здоровья\n";
            int choice;
            std::cin >> choice;
            if (choice == 1 && player.spendCoins(50)) {
                this->attack += 15;
            } else if (choice == 2 && player.spendCoins(30)) {
                this->health += 25;
            }
        }
    };