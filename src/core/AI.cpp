/**
 * @file AI.cpp
 * @brief Реализация класса искусственного интеллекта
 */

#include "core/AI.h"  
#include "Entity.h"
#include <random>
#include <iostream>
#include <stdexcept>

// Статический генератор случайных чисел
static std::random_device rd;
static std::mt19937 gen(rd());

/**
 * @brief Конструктор ИИ.
 * @param name Имя.
 * @param health Здоровье.
 * @param attack Атака.
 * @param ability Способность.
 * @param price Стоимость.
 */
AI::AI(const std::string& name, int health, int attack, const std::string& ability, int price)  
    : Entity(name, health, attack, ability, price),
      abilityUsed(false) {}  

/**
 * @brief Совершает ход ИИ.
 * @param target Цель атаки.
 * @details С 50% вероятностью использует способность (если еще не использована) или атакует.
 */
void AI::makeMove(Entity& target) {  
    if (!target.isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }

    std::uniform_int_distribution<> dis(0, 1);
    if (dis(gen) == 0 && !abilityUsed) {     
        useUniqueAbility(&target);
        abilityUsed = true;
    } else {  
        target.takeDamage(getAttack());  
    }  
}  

/**
 * @brief Проверяет, использована ли способность.
 * @return true, если способность использована в этом ходу.
 */
bool AI::getAbilityUsed() const {
    return abilityUsed;  
}

void AI::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует " << getAbilityName() << "!\n";
    setAttack(getAttack() * 1.5);
}

void AI::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health <= 0) {
        health = 0;
    }
}

bool AI::isAlive() const {
    return health > 0;
}