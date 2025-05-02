/**
 * @file BattleSystem.cpp
 * @brief Реализация системы боя между сущностями
 */

#include "core/BattleSystem.h"
#include "core/Player.h"
#include "core/AI.h"
#include "Elite/Official.h"  
#include "ZombiAnimals/ZombiDog.h"
#include "Entity.h"
#include <iostream>
#include <limits>
#include <stdexcept>

/**
 * @brief Конструктор системы боя.
 * @param p1 Первый участник боя.
 * @param p2 Второй участник боя.
 * @param isPvP Режим "игрок против игрока".
 */
BattleSystem::BattleSystem(Entity& p1, Entity& p2, bool isPvP) 
    : player1(p1), player2(p2), isPvPMode(isPvP) {
    if (!p1.isAlive() || !p2.isAlive()) {
        throw std::invalid_argument("Участники боя должны быть живы");
    }
}

/**
 * @brief Начинает и управляет ходом боя.
 * @details Поочередно вызывает ходы участников до окончания боя.
 */
void BattleSystem::startBattle() {
    std::cout << "=== БОЙ НАЧАЛСЯ ===\n";
    std::cout << player1.getName() << " vs " << player2.getName() << "\n\n";

    while (!isBattleOver()) {
        try {
            // Ход первого игрока (управляемого игроком)
            std::cout << "\n[Ход " << player1.getName() << "]\n";
            std::cout << "Здоровье: " << player1.getHealth() << "/" << player1.getMaxHealth() << "\n";
            std::cout << "1. Атака (" << player1.getAttack() << " урона)\n";
            std::cout << "2. Способность\n";
            
            int choice;
            while (true) {
                std::cout << "Ваш выбор: ";
                std::cin >> choice;
                
                if (std::cin.fail() || choice < 1 || choice > 2) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Неверный выбор! Введите 1 или 2: ";
                    continue;
                }
                break;
            }

            if (choice == 1) {
                player2.takeDamage(player1.getAttack());
                std::cout << player1.getName() << " атакует и наносит " 
                         << player1.getAttack() << " урона!\n";
            } else {
                player1.useUniqueAbility(&player2);
            }
            
            std::cout << player2.getName() << ": " << player2.getHealth() 
                     << "/" << player2.getMaxHealth() << " HP\n";

            if (isBattleOver()) break;

            // Ход второго игрока (противника)
            entityTurn(player2, player1);
        } catch (const std::exception& e) {
            std::cerr << "Ошибка в ходе боя: " << e.what() << std::endl;
            break;
        }
    }

    announceWinner();
}

/**
 * @brief Обрабатывает ход игрока.
 * @param player Атакующий игрок.
 * @param enemy Цель атаки.
 */
void BattleSystem::playerTurn(Player& player, Entity& enemy) {
    if (!player.isAlive() || !enemy.isAlive()) {
        throw std::invalid_argument("Участники боя должны быть живы");
    }

    std::cout << "\n[Ход " << player.getName() << "]\n";
    std::cout << "Здоровье: " << player.getHealth() << "/" << player.getMaxHealth() << "\n";
    std::cout << "1. Атака (" << player.getAttack() << " урона)\n";
    
    if (player.canUseAbility()) {
        std::cout << "2. Способность: " << player.getAbilityName() << "\n";
    }

    int choice;
    while (true) {
        std::cout << "Ваш выбор: ";
        std::cin >> choice;
        
        if (std::cin.fail() || choice < 1 || choice > 2 || 
            (choice == 2 && !player.canUseAbility())) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный выбор! Введите 1 или 2: ";
            continue;
        }
        break;
    }

    if (choice == 1) {
        enemy.takeDamage(player.getAttack());
        std::cout << player.getName() << " атакует и наносит " 
                 << player.getAttack() << " урона!\n";
    } else {
        player.useUniqueAbility(&enemy);
    }
    
    std::cout << enemy.getName() << ": " << enemy.getHealth() 
             << "/" << enemy.getMaxHealth() << " HP\n";
}

/**
 * @brief Обрабатывает ход ИИ.
 * @param ai Атакующий ИИ.
 * @param player Цель атаки.
 */
void BattleSystem::aiTurn(AI& ai, Entity& player) {
    if (!ai.isAlive() || !player.isAlive()) {
        throw std::invalid_argument("Участники боя должны быть живы");
    }

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

/**
 * @brief Обрабатывает ход обычной сущности.
 * @param attacker Атакующая сущность.
 * @param defender Защищающаяся сущность.
 */
void BattleSystem::entityTurn(Entity& attacker, Entity& defender) {
    std::cout << "Ход " << attacker.getName() << ":\n";
    
    // Атака
    int damage = attacker.getAttack();
    defender.takeDamage(damage);
    std::cout << attacker.getName() << " наносит " << damage << " урона " 
              << defender.getName() << ".\n";
    
    // Проверка на использование способности (30% шанс)
    if (rand() % 100 < 30) {
        attacker.useUniqueAbility(&defender);
    }
    
    std::cout << "\n";
}

/**
 * @brief Проверяет окончание боя.
 * @return true, если один из участников мертв.
 */
bool BattleSystem::isBattleOver() const {
    return !player1.isAlive() || !player2.isAlive();
}

void BattleSystem::announceWinner() {
    if (isBattleOver()) {
        Entity& winner = player1.isAlive() ? player1 : player2;
        std::cout << "\n=== " << winner.getName() << " ПОБЕДИЛ! ===\n";
    }
}