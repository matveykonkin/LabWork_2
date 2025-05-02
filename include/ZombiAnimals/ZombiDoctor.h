/**
 * @file ZombiDoctor.h
 * @brief Заголовочный файл для класса ZombiDoctor
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiDoctor
 * @brief Класс, представляющий зомби-доктора
 * 
 * Класс ZombiDoctor наследуется от Entity и реализует уникальную способность
 * "Лечение", которая позволяет восстанавливать здоровье.
 */
class ZombiDoctor : public Entity {
public:
    /**
     * @brief Конструктор зомби-доктора
     * @param name Имя зомби-доктора
     * @param health Здоровье зомби-доктора
     * @param attack Сила атаки зомби-доктора
     * @param ability Уникальная способность зомби-доктора
     * @param price Цена зомби-доктора
     */
    ZombiDoctor(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-доктор
     * @return true, если зомби-доктор жив
     */
    bool isAlive() const override;
}; 