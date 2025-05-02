/**
 * @file Scientist.h
 * @brief Заголовочный файл для класса Scientist
 */

#pragma once

#include "Entity.h"

/**
 * @class Scientist
 * @brief Класс, представляющий ученого
 * 
 * Класс Scientist наследуется от Entity и реализует уникальную способность
 * "Научный прорыв", которая позволяет временно увеличить здоровье.
 */
class Scientist : public Entity {
public:
    /**
     * @brief Конструктор ученого
     * @param name Имя ученого
     * @param health Здоровье ученого
     * @param attack Сила атаки ученого
     * @param ability Уникальная способность ученого
     * @param price Цена ученого
     */
    Scientist(const std::string& name, int health, int attack,
              const std::string& ability, int price);

    /**
     * @brief Использовать уникальную способность
     * @param target Цель способности
     */
    void useUniqueAbility(Entity* target) override;

    /**
     * @brief Получить урон
     * @param damage Количество урона
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверить, жив ли ученый
     * @return true, если ученый жив
     */
    bool isAlive() const override;
}; 