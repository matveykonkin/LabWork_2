/**
 * @file HugeBusinessman.h
 * @brief Заголовочный файл для класса HugeBusinessman
 */

#pragma once

#include "Entity.h"

/**
 * @class HugeBusinessman
 * @brief Класс, представляющий крупного бизнесмена
 * 
 * Класс HugeBusinessman наследуется от Entity и реализует уникальную способность
 * "Крупный бизнес", которая позволяет временно увеличить доход.
 */
class HugeBusinessman : public Entity {
public:
    /**
     * @brief Конструктор крупного бизнесмена
     * @param name Имя крупного бизнесмена
     * @param health Здоровье крупного бизнесмена
     * @param attack Сила атаки крупного бизнесмена
     * @param ability Уникальная способность крупного бизнесмена
     * @param price Цена крупного бизнесмена
     */
    HugeBusinessman(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли крупный бизнесмен
     * @return true, если крупный бизнесмен жив
     */
    bool isAlive() const override;
}; 