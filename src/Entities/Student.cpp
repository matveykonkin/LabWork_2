/**
 * @file Student.cpp
 * @brief Реализация класса Student
 */

#include "Entities/Student.h"

/**
 * @brief Конструктор студента
 * @param name Имя студента
 * @param health Здоровье студента
 * @param attack Сила атаки студента
 * @param ability Уникальная способность студента
 * @param price Цена студента
 */
Student::Student(const std::string& name, int health, int attack,
                 const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Student::useUniqueAbility(Entity* target) {
    if (target) {
        health += 30; // Временное увеличение здоровья
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Student::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли студент
 * @return true, если студент жив
 */
bool Student::isAlive() const {
    return health > 0;
} 