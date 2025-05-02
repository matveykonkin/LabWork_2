/**
 * @file Teacher.h
 * @brief Заголовочный файл для класса Teacher
 */

#pragma once

#include "Entity.h"

/**
 * @class Teacher
 * @brief Класс, представляющий учителя
 * 
 * Класс Teacher наследуется от Entity и реализует уникальную способность
 * "Мотивация", которая позволяет временно увеличить атаку союзника.
 */
class Teacher : public Entity {
public:
    /**
     * @brief Конструктор учителя
     * @param name Имя учителя
     * @param health Здоровье учителя
     * @param attack Сила атаки учителя
     * @param ability Уникальная способность учителя
     * @param price Цена учителя
     */
    Teacher(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли учитель
     * @return true, если учитель жив
     */
    bool isAlive() const override;
}; 