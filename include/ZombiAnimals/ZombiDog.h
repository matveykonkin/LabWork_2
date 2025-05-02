/**
 * @file ZombiDog.h
 * @brief Заголовочный файл для класса ZombiDog
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiDog
 * @brief Класс, представляющий зомби-собаку
 * 
 * Класс ZombiDog наследуется от Entity и реализует уникальную способность
 * "Собачий укус", которая позволяет наносить урон с шансом кровотечения.
 */
class ZombiDog : public Entity {
public:
    /**
     * @brief Конструктор зомби-собаки
     * @param name Имя зомби-собаки
     * @param health Здоровье зомби-собаки
     * @param attack Сила атаки зомби-собаки
     * @param ability Уникальная способность зомби-собаки
     * @param price Цена зомби-собаки
     */
    ZombiDog(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-собака
     * @return true, если зомби-собака жив
     */
    bool isAlive() const override;
}; 