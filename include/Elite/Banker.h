/**
 * @file Banker.h
 * @brief Заголовочный файл для класса Banker
 */

#pragma once

#include "Entity.h"

/**
 * @class Banker
 * @brief Класс, представляющий банкира
 * 
 * Класс Banker наследуется от Entity и реализует уникальную способность
 * "Банковский счет", которая позволяет временно увеличить доход.
 */
class Banker : public Entity {
public:
    /**
     * @brief Конструктор банкира
     * @param name Имя банкира
     * @param health Здоровье банкира
     * @param attack Сила атаки банкира
     * @param ability Уникальная способность банкира
     * @param price Цена банкира
     */
    Banker(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли банкир
     * @return true, если банкир жив
     */
    bool isAlive() const override;
}; 