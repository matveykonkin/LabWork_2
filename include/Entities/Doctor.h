/**
 * @file Doctor.h
 * @brief Заголовочный файл для класса Doctor
 */

#pragma once

#include "Entity.h"

/**
 * @class Doctor
 * @brief Класс, представляющий доктора
 * 
 * Класс Doctor наследуется от Entity и реализует уникальную способность
 * "Лечение", которая позволяет восстановить здоровье союзника.
 */
class Doctor : public Entity {
public:
    /**
     * @brief Конструктор доктора
     * @param name Имя доктора
     * @param health Здоровье доктора
     * @param attack Сила атаки доктора
     * @param ability Уникальная способность доктора
     * @param price Цена доктора
     */
    Doctor(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли доктор
     * @return true, если доктор жив
     */
    bool isAlive() const override;
}; 