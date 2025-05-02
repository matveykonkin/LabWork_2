/**
 * @file ZombiWolf.h
 * @brief Заголовочный файл для класса ZombiWolf
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiWolf
 * @brief Класс, представляющий зомби-волка
 * 
 * Класс ZombiWolf наследуется от Entity и реализует уникальную способность
 * "Волчий укус", которая позволяет наносить урон с шансом кровотечения.
 */
class ZombiWolf : public Entity {
public:
    /**
     * @brief Конструктор зомби-волка
     * @param name Имя зомби-волка
     * @param health Здоровье зомби-волка
     * @param attack Сила атаки зомби-волка
     * @param ability Уникальная способность зомби-волка
     * @param price Цена зомби-волка
     */
    ZombiWolf(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-волк
     * @return true, если зомби-волк жив
     */
    bool isAlive() const override;
}; 