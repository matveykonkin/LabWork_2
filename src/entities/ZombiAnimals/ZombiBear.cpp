#include "ZombiAnimals/ZombiBear.h"
#include "Entity.h"
#include <iostream>
#include <stdexcept>

/**
 * @brief Конструктор зомби-медведя
 * @param name Имя зомби-медведя
 * @param health Здоровье зомби-медведя
 * @param attack Сила атаки зомби-медведя
 * @param ability Уникальная способность зомби-медведя
 * @param price Цена зомби-медведя
 */
ZombiBear::ZombiBear(const std::string& name, int health, int attack,
                     const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiBear::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли зомби-медведь.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiBear::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность зомби-медведя
 * @param target Цель способности
 * @details Снижает атаку противника на 30%
 */
void ZombiBear::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (снижает атаку противника)\n";
    target->setAttack(target->getAttack() * 0.7);
}    
