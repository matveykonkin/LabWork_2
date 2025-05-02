/**
 * @file Player.cpp
 * @brief Реализация класса игрока
 */

#include "core/Player.h"
#include <iostream>
#include <limits>
#include <stdexcept>

Player::Player(const std::string& name, int health, int attack,
               const std::string& ability, int price) :
    Entity(name, health, attack, ability, price),
    coins(0),
    abilityUsed(false),
    abilitiesLocked(false),
    skipTurn(false) {}

void Player::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    if (health > 0) {
        health = std::max(0, health - damage);
        std::cout << name << " получает " << damage << " урона. "
                  << "Осталось здоровья: " << health << "/" << maxHealth << std::endl;
    }
}

bool Player::isAlive() const {
    return health > 0;
}

bool Player::canUseAbility() const {
    return !abilityUsed && !abilitiesLocked;
}

void Player::markAbilityUsed() {
    abilityUsed = true;
}

void Player::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    if (abilityUsed) {
        throw std::runtime_error("Способность уже использована в этом ходу");
    }
    if (abilitiesLocked) {
        throw std::runtime_error("Способности заблокированы");
    }
    std::cout << getName() << " использует " << getAbilityName() << "!\n";
    target->takeDamage(getAttack() * 2);
    abilityUsed = true;
}

void Player::addCoins(int amount) {
    if (amount < 0) {
        throw std::invalid_argument("Количество монет не может быть отрицательным");
    }
    if (coins > std::numeric_limits<int>::max() - amount) {
        throw std::overflow_error("Переполнение при добавлении монет");
    }
    coins += amount;
    std::cout << "Получено " << amount << " монет. Текущий баланс: " << coins << std::endl;
}

bool Player::spendCoins(int amount) {
    if (amount < 0) {
        throw std::invalid_argument("Количество монет не может быть отрицательным");
    }
    if (coins >= amount) {
        coins -= amount;
        std::cout << "Потрачено " << amount << " монет. Осталось: " << coins << std::endl;
        return true;
    }
    std::cout << "Недостаточно монет! Нужно: " << amount << ", есть: " << coins << std::endl;
    return false;
}

void Player::setAbilitiesLocked(bool locked) {
    abilitiesLocked = locked;
    std::cout << "Способности " << (locked ? "заблокированы" : "разблокированы") << std::endl;
}

void Player::setSkipTurn(bool skip) {
    skipTurn = skip;
    std::cout << name << (skip ? " пропускает ход" : " снова может ходить") << std::endl;
}