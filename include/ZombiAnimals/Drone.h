/**
 * @file Drone.h
 * @brief Заголовочный файл для класса Drone
 */

#pragma once

#include "Entity.h"

/**
 * @class Drone
 * @brief Класс, представляющий дрон
 * 
 * Класс Drone наследуется от Entity и реализует уникальную способность
 * "Обстрел", которая позволяет наносить урон по области.
 */
class Drone : public Entity {
public:
    /**
     * @brief Конструктор дрона
     * @param name Имя дрона
     * @param health Здоровье дрона
     * @param attack Сила атаки дрона
     * @param ability Уникальная способность дрона
     * @param price Цена дрона
     */
    Drone(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли дрон
     * @return true, если дрон жив
     */
    bool isAlive() const override;
}; 