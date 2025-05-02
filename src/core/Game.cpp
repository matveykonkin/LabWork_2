/**
 * @file Game.cpp
 * @brief Реализация основного класса игры
 */

#include "core/Game.h"
#include <iostream>
#include <limits>
#include <stdexcept>

Game::Game() : cardSystem() {}

void Game::start() {
    std::cout << "=== ДОБРО ПОЖАЛОВАТЬ В ИГРУ ===\n";
    
    auto player = selectCharacter();
    auto opponent = selectOpponent();
    
    startBattle(*player, *opponent);
}

std::unique_ptr<Entity> Game::selectCharacter() {
    std::cout << "Выберите своего персонажа:\n";
    for (size_t i = 0; i < cardSystem.getCardCount(); ++i) {
        std::cout << i + 1 << ". " << cardSystem.getCard(i)->getName() << "\n";
    }
    
    int choice;
    while (true) {
        std::cout << "Ваш выбор (1-" << cardSystem.getCardCount() << "): ";
        std::cin >> choice;
        
        if (std::cin.fail() || choice < 1 || choice > static_cast<int>(cardSystem.getCardCount())) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный выбор! Попробуйте снова.\n";
            continue;
        }
        break;
    }
    
    return cardSystem.createCard(cardSystem.getCard(choice - 1)->getName());
}

std::unique_ptr<Entity> Game::selectOpponent() {
    std::cout << "\nВыберите противника:\n";
    for (size_t i = 0; i < cardSystem.getCardCount(); ++i) {
        std::cout << i + 1 << ". " << cardSystem.getCard(i)->getName() << "\n";
    }
    
    int choice;
    while (true) {
        std::cout << "Ваш выбор (1-" << cardSystem.getCardCount() << "): ";
        std::cin >> choice;
        
        if (std::cin.fail() || choice < 1 || choice > static_cast<int>(cardSystem.getCardCount())) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный выбор! Попробуйте снова.\n";
            continue;
        }
        break;
    }
    
    return cardSystem.createCard(cardSystem.getCard(choice - 1)->getName());
}

void Game::startBattle(Entity& player1, Entity& player2) {
    battleSystem = std::make_unique<BattleSystem>(player1, player2);
    battleSystem->startBattle();
} 