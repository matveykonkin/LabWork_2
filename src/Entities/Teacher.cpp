/**
 * @file Teacher.cpp
 * @brief Реализация класса Teacher
 */

#include "Entities/Teacher.h"

/**
 * @brief Конструктор учителя
 * @param name Имя учителя
 * @param health Здоровье учителя
 * @param attack Сила атаки учителя
 * @param ability Уникальная способность учителя
 * @param price Цена учителя
 */
Teacher::Teacher(const std::string& name, int health, int attack,
                 const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Teacher::useUniqueAbility(Entity* target) {
    if (target) {
        // Временное увеличение атаки союзника
        // (реализация будет добавлена позже)
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Teacher::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли учитель
 * @return true, если учитель жив
 */
bool Teacher::isAlive() const {
    return health > 0;
} 