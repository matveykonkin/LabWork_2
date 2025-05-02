/**
 * @file ZombiStudent.cpp
 * @brief Реализация класса ZombiStudent
 */

#include "ZombiAnimals/ZombiStudent.h"

/**
 * @brief Конструктор зомби-студента
 * @param name Имя зомби-студента
 * @param health Здоровье зомби-студента
 * @param attack Сила атаки зомби-студента
 * @param ability Уникальная способность зомби-студента
 * @param price Цена зомби-студента
 */
ZombiStudent::ZombiStudent(const std::string& name, int health, int attack,
                          const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void ZombiStudent::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(3); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void ZombiStudent::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли зомби-студент
 * @return true, если зомби-студент жив
 */
bool ZombiStudent::isAlive() const {
    return health > 0;
} 