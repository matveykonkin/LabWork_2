#include "include/core/BattleSystem.h"
#include "Player.h"
#include "AI.h"
#include "Entity.h"
#include <iostream>
#include <limits>

BattleSystem::BattleSystem(Entity& p1, Entity& p2, bool isPvP) 
    : player1(p1), player2(p2), isPvPMode(isPvP) {}

void BattleSystem::startBattle() {
    std::cout << "=== БОЙ НАЧАЛСЯ ===\n";
    std::cout << player1.getName() << " vs " << player2.getName() << "\n\n";

    while (!isBattleOver()) {
        if (auto* player = dynamic_cast<Player*>(&player1)) {
            playerTurn(*player, player2);
        } else if (auto* ai = dynamic_cast<AI*>(&player1)) {
            aiTurn(*ai, player2);
        }

        if (isBattleOver()) break;

        if (isPvPMode) {
            if (auto* player = dynamic_cast<Player*>(&player2)) {
                playerTurn(*player, player1);
            }
        } else {
            if (auto* ai = dynamic_cast<AI*>(&player2)) {
                aiTurn(*ai, player1);
            }
        }
    }

    Entity& winner = player1.isAlive() ? player1 : player2;
    std::cout << "\n=== " << winner.getName() << " ПОБЕДИЛ! ===\n";
}

void BattleSystem::playerTurn(Player& player, Entity& enemy) {
    std::cout << "\n[Ход " << player.getName() << "]\n";
    std::cout << "1. Атака (" << player.getAttack() << " урона)\n";
    if (player.canUseAbility()) {
        std::cout << "2. Использовать способность: " << player.getAbilityName() << "\n";
    }

    int choice;
    while (true) {
        std::cin >> choice;
        if (std::cin.fail() || (choice != 1 && (choice != 2 || !player.canUseAbility()))) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный ввод. Выберите 1 или 2: ";
            continue;
        }
        break;
    }

    if (choice == 2) {
        player.useUniqueAbility();
        player.markAbilityUsed();
        std::cout << player.getName() << " использует " << player.getAbilityName() << "!\n";
    } else {
        enemy.takeDamage(player.getAttack());
        std::cout << player.getName() << " атакует! " 
                  << enemy.getName() << " теряет " 
                  << player.getAttack() << " HP.\n";
    }

    std::cout << enemy.getName() << ": " << enemy.getHealth() << "/" << enemy.getMaxHealth() << " HP\n";
}

void BattleSystem::aiTurn(AI& ai, Entity& player) {
    std::cout << "\n[Ход " << ai.getName() << " (AI)]\n";
    ai.makeMove(player);

    if (ai.getAbilityUsed()) {
        std::cout << ai.getName() << " использует " << ai.getAbilityName() << "!\n";
    } else {
        std::cout << ai.getName() << " атакует! " 
                 << player.getName() << " теряет " 
                 << ai.getAttack() << " HP.\n";
    }

    std::cout << player.getName() << ": " << player.getHealth() << "/" << player.getMaxHealth() << " HP\n";
}

bool BattleSystem::isBattleOver() const {
    return !player1.isAlive() || !player2.isAlive();
}