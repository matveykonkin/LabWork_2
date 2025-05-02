/**
 * @file Dog.h
 * @brief Заголовочный файл для класса Dog
 */

#pragma once

#include "Entity.h"

/**
 * @class Dog
 * @brief Класс, представляющий собаку
 * 
 * Класс Dog наследуется от Entity и реализует уникальную способность
 * "Верность", которая позволяет временно увеличить здоровье союзника.
 */
class Dog : public Entity {
public:
    /**
     * @brief Конструктор собаки
     * @param name Имя собаки
     * @param health Здоровье собаки
     * @param attack Сила атаки собаки
     * @param ability Уникальная способность собаки
     * @param price Цена собаки
     */
    Dog(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли собака
     * @return true, если собака жива
     */
    bool isAlive() const override;
}; 