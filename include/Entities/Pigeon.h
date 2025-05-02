/**
 * @file Pigeon.h
 * @brief Заголовочный файл для класса Pigeon
 */

#pragma once

#include "Entity.h"

/**
 * @class Pigeon
 * @brief Класс, представляющий голубя
 * 
 * Класс Pigeon наследуется от Entity и реализует уникальную способность
 * "Полёт", которая позволяет временно увеличить здоровье.
 */
class Pigeon : public Entity {
public:
    /**
     * @brief Конструктор голубя
     * @param name Имя голубя
     * @param health Здоровье голубя
     * @param attack Сила атаки голубя
     * @param ability Уникальная способность голубя
     * @param price Цена голубя
     */
    Pigeon(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли голубь
     * @return true, если голубь жив
     */
    bool isAlive() const override;
}; 