#include "Technological Entities/CyberZombi.h"
#include <iostream>
#include <stdexcept>

/**
 * @brief Конструктор кибер-зомби
 * @param name Имя кибер-зомби
 * @param health Здоровье кибер-зомби
 * @param attack Сила атаки кибер-зомби
 * @param ability Уникальная способность кибер-зомби
 * @param price Цена кибер-зомби
 */
CyberZombi::CyberZombi(const std::string& name, int health, int attack,
                       const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void CyberZombi::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли кибер-зомби.
 * @return true, если здоровье больше 0, иначе false.
 */
bool CyberZombi::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность кибер-зомби
 * @param target Цель способности
 * @details Отключает способности противника
 */
void CyberZombi::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (отключает способности противника)" << std::endl;
    target->setAbilitiesLocked(true);
}