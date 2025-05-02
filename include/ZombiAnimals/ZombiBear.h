/**
 * @file ZombiBear.h
 * @brief Заголовочный файл для класса ZombiBear
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiBear
 * @brief Класс, представляющий зомби-медведя
 * 
 * Класс ZombiBear наследуется от Entity и реализует уникальную способность
 * "Медвежий удар", которая позволяет наносить сильный урон.
 */
class ZombiBear : public Entity {
public:
    /**
     * @brief Конструктор зомби-медведя
     * @param name Имя зомби-медведя
     * @param health Здоровье зомби-медведя
     * @param attack Сила атаки зомби-медведя
     * @param ability Уникальная способность зомби-медведя
     * @param price Цена зомби-медведя
     */
    ZombiBear(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-медведь
     * @return true, если зомби-медведь жив
     */
    bool isAlive() const override;
}; 