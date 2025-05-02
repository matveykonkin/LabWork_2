/**
 * @file Child.h
 * @brief Заголовочный файл для класса Child
 */

#pragma once

#include "Entity.h"

/**
 * @class Child
 * @brief Класс, представляющий ребенка
 * 
 * Класс Child наследуется от Entity и реализует уникальную способность
 * "Детская шалость", которая позволяет временно увеличить атаку.
 */
class Child : public Entity {
public:
    /**
     * @brief Конструктор ребенка
     * @param name Имя ребенка
     * @param health Здоровье ребенка
     * @param attack Сила атаки ребенка
     * @param ability Уникальная способность ребенка
     * @param price Цена ребенка
     */
    Child(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли ребенок
     * @return true, если ребенок жив
     */
    bool isAlive() const override;
}; 