/**
 * @file CyberZombi.cpp
 * @brief Реализация класса CyberZombi
 */

#include "ZombiAnimals/CyberZombi.h"

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
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void CyberZombi::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(15); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void CyberZombi::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли кибер-зомби
 * @return true, если кибер-зомби жив
 */
bool CyberZombi::isAlive() const {
    return health > 0;
} 