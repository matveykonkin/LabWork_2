/**
 * @file Official.h
 * @brief Заголовочный файл для класса Official
 */

#pragma once

#include "Entity.h"

/**
 * @class Official
 * @brief Класс, представляющий чиновника
 * 
 * Класс Official наследуется от Entity и реализует уникальную способность
 * "Взятка", которая позволяет временно увеличить доход.
 */
class Official : public Entity {
public:
    /**
     * @brief Конструктор чиновника
     * @param name Имя чиновника
     * @param health Здоровье чиновника
     * @param attack Сила атаки чиновника
     * @param ability Уникальная способность чиновника
     * @param price Цена чиновника
     */
    Official(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли чиновник
     * @return true, если чиновник жив
     */
    bool isAlive() const override;
}; 