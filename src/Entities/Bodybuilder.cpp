/**
 * @file Bodybuilder.cpp
 * @brief Реализация класса Bodybuilder
 */

#include "Entities/Bodybuilder.h"

/**
 * @brief Конструктор бодибилдера
 * @param name Имя бодибилдера
 * @param health Здоровье бодибилдера
 * @param attack Сила атаки бодибилдера
 * @param ability Уникальная способность бодибилдера
 * @param price Цена бодибилдера
 */
Bodybuilder::Bodybuilder(const std::string& name, int health, int attack,
                         const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Bodybuilder::useUniqueAbility(Entity* target) {
    if (target) {
        attack += 25; // Временное увеличение атаки
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Bodybuilder::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли бодибилдер
 * @return true, если бодибилдер жив
 */
bool Bodybuilder::isAlive() const {
    return health > 0;
} 