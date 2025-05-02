/**
 * @file Bear.h
 * @brief Заголовочный файл для класса Bear
 */

#pragma once

#include "Entity.h"

/**
 * @class Bear
 * @brief Класс, представляющий медведя
 * 
 * Класс Bear наследуется от Entity и реализует уникальную способность
 * "Медвежья сила", которая позволяет нанести тройной урон.
 */
class Bear : public Entity {
public:
    /**
     * @brief Конструктор медведя
     * @param name Имя медведя
     * @param health Здоровье медведя
     * @param attack Сила атаки медведя
     * @param ability Уникальная способность медведя
     * @param price Цена медведя
     */
    Bear(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли медведь
     * @return true, если медведь жив
     */
    bool isAlive() const override;
}; 