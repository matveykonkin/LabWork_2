/**
 * @file ZombiPolice.h
 * @brief Заголовочный файл для класса ZombiPolice
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiPolice
 * @brief Класс, представляющий зомби-полицейского
 * 
 * Класс ZombiPolice наследуется от Entity и реализует уникальную способность
 * "Арест", которая позволяет временно обездвижить цель.
 */
class ZombiPolice : public Entity {
public:
    /**
     * @brief Конструктор зомби-полицейского
     * @param name Имя зомби-полицейского
     * @param health Здоровье зомби-полицейского
     * @param attack Сила атаки зомби-полицейского
     * @param ability Уникальная способность зомби-полицейского
     * @param price Цена зомби-полицейского
     */
    ZombiPolice(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-полицейский
     * @return true, если зомби-полицейский жив
     */
    bool isAlive() const override;
}; 