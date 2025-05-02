/**
 * @file Wolf.h
 * @brief Заголовочный файл для класса Wolf
 */

#pragma once

#include "Entity.h"

/**
 * @class Wolf
 * @brief Класс, представляющий волка
 * 
 * Класс Wolf наследуется от Entity и реализует уникальную способность
 * "Охота", которая позволяет нанести двойной урон.
 */
class Wolf : public Entity {
public:
    /**
     * @brief Конструктор волка
     * @param name Имя волка
     * @param health Здоровье волка
     * @param attack Сила атаки волка
     * @param ability Уникальная способность волка
     * @param price Цена волка
     */
    Wolf(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли волк
     * @return true, если волк жив
     */
    bool isAlive() const override;
}; 