/**
 * @file Police.h
 * @brief Заголовочный файл для класса Police
 */

#pragma once

#include "Entity.h"

/**
 * @class Police
 * @brief Класс, представляющий полицейского
 * 
 * Класс Police наследуется от Entity и реализует уникальную способность
 * "Арест", которая позволяет временно обездвижить противника.
 */
class Police : public Entity {
public:
    /**
     * @brief Конструктор полицейского
     * @param name Имя полицейского
     * @param health Здоровье полицейского
     * @param attack Сила атаки полицейского
     * @param ability Уникальная способность полицейского
     * @param price Цена полицейского
     */
    Police(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли полицейский
     * @return true, если полицейский жив
     */
    bool isAlive() const override;
}; 