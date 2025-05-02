/**
 * @file Doctor.cpp
 * @brief Реализация класса Doctor
 */

#include "Entities/Doctor.h"

/**
 * @brief Конструктор доктора
 * @param name Имя доктора
 * @param health Здоровье доктора
 * @param attack Сила атаки доктора
 * @param ability Уникальная способность доктора
 * @param price Цена доктора
 */
Doctor::Doctor(const std::string& name, int health, int attack,
               const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Doctor::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(-50); // Восстановление здоровья
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Doctor::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли доктор
 * @return true, если доктор жив
 */
bool Doctor::isAlive() const {
 