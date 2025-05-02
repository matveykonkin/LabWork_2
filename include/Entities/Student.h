/**
 * @file Student.h
 * @brief Заголовочный файл для класса Student
 */

#pragma once

#include "Entity.h"

/**
 * @class Student
 * @brief Класс, представляющий студента
 * 
 * Класс Student наследуется от Entity и реализует уникальную способность
 * "Учеба", которая позволяет временно увеличить здоровье.
 */
class Student : public Entity {
public:
    /**
     * @brief Конструктор студента
     * @param name Имя студента
     * @param health Здоровье студента
     * @param attack Сила атаки студента
     * @param ability Уникальная способность студента
     * @param price Цена студента
     */
    Student(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли студент
     * @return true, если студент жив
     */
    bool isAlive() const override;
}; 