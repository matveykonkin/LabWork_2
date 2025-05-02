/**
 * @file Robot.h
 * @brief Заголовочный файл для класса Robot
 */

#pragma once

#include "Entity.h"

/**
 * @class Robot
 * @brief Класс, представляющий робота
 * 
 * Класс Robot наследуется от Entity и реализует уникальную способность
 * "Механический удар", которая позволяет наносить сильный урон.
 */
class Robot : public Entity {
public:
    /**
     * @brief Конструктор робота
     * @param name Имя робота
     * @param health Здоровье робота
     * @param attack Сила атаки робота
     * @param ability Уникальная способность робота
     * @param price Цена робота
     */
    Robot(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли робот
     * @return true, если робот жив
     */
    bool isAlive() const override;
}; 