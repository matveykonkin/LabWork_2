#include "SmallBusinessman.h"
#include "Player.h"
#include <iostream>

SmallBusinessman::SmallBusinessman() :
    Entity("Small Businessman", 75, 9, "Toproana", 115) {}

void SmallBusinessman::useUniqueAbility(Entity* target) {
    Player* player = dynamic_cast<Player*>(target);
    if (!player) {
        std::cerr << "Сделка доступна только с игроком!\n";
        return;
    }

    std::cout << name << " предлагает сделку:\n";
    std::cout << "1. 50 монет - +15 атаки\n2. 30 монет - +25 здоровья\n";
    int choice;
    std::cin >> choice;

    if (choice == 1 && player->spendCoins(50)) {
        this->attack += 15;
    } else if (choice == 2 && player->spendCoins(30)) {
        this->health += 25;
    }
}