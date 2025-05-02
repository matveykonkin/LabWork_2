/**
 * @file SmallBusinessman.h
 * @brief Заголовочный файл для класса SmallBusinessman
 */

#pragma once

#include "Entity.h"

/**
 * @class SmallBusinessman
 * @brief Класс, представляющий малого бизнесмена
 * 
 * Класс SmallBusinessman наследуется от Entity и реализует уникальную способность
 * "Малый бизнес", которая позволяет временно увеличить доход.
 */
class SmallBusinessman : public Entity {
public:
    /**
     * @brief Конструктор малого бизнесмена
     * @param name Имя малого бизнесмена
     * @param health Здоровье малого бизнесмена
     * @param attack Сила атаки малого бизнесмена
     * @param ability Уникальная способность малого бизнесмена
     * @param price Цена малого бизнесмена
     */
    SmallBusinessman(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли малый бизнесмен
     * @return true, если малый бизнесмен жив
     */
    bool isAlive() const override;
}; 