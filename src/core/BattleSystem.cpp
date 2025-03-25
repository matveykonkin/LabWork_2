#include "BattleSystem.h"

BattleSystem::BattleSystem(Entity& p1, Entity& p2) 
    : player1(p1), player2(p2) {}

void BattleSystem::startBattle(bool isPlayerVsAI) {
    std::cout << "Бой начался!\n";
    while (player1.isAlive() && player2.isAlive()) {
        playerTurn(player1, player2, player1UsedAbility);
        if (!player2.isAlive()) break;

        if (isPlayerVsAI) {
            aiTurn(player2, player1);
        } else {
            playerTurn(player2, player1, player2UsedAbility);
        }
    }

    std::cout << (player1.isAlive() ? player1.getName() : player2.getName()) 
              << " побеждает!\n";
}

void BattleSystem::playerTurn(Entity& attacker, Entity& defender, bool& abilityUsed) {
    std::cout << "\nХод " << attacker.getName() << ":\n";
    std::cout << "1. Атака\n";
    if (!abilityUsed) {
        std::cout << "2. Использовать способность\n";
    }

    int choice;
    std::cin >> choice;

    if (choice == 2 && !abilityUsed) {
        attacker.useUniqueAbility();
        abilityUsed = true;
    } else {
        defender.takeDamage(attacker.getAttack());
        std::cout << attacker.getName() << " атакует! " 
                  << defender.getName() << " теряет " 
                  << attacker.getAttack() << " HP.\n";
    }
}

void BattleSystem::aiTurn(Entity& ai, Entity& player) {
    std::cout << "\nХод " << ai.getName() << " (AI):\n";
    
    if (!player2UsedAbility && rand() % 2 == 0) {  
        ai.useUniqueAbility();
        player2UsedAbility = true;
    } else {
        player.takeDamage(ai.getAttack());
        std::cout << ai.getName() << " атакует! " 
                  << player.getName() << " теряет " 
                  << ai.getAttack() << " HP.\n";
    }
}