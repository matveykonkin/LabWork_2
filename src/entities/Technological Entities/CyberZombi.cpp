/**
 * @file CyberZombi.cpp
 * @brief Реализация класса CyberZombi (кибер-зомби).
 */

#include "Technological Entities/CyberZombi.h"
#include <iostream>

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
 */
void CyberZombi::takeDamage(int damage) {
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
 * @brief Использует уникальную способность кибер-зомби.
 * @param target Цель для атаки (указатель на Entity).
 * @details Может взламывать системы противника, отключая его способности.
 */
void CyberZombi::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << name << " использует способность: " << uniqueAbility << "!" << std::endl;
    target->setAttack(target->getAttack() / 2); // Уменьшает атаку цели вдвое
} 