/**
 * @file ZombiStudent.h
 * @brief Заголовочный файл для класса ZombiStudent
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiStudent
 * @brief Класс, представляющий зомби-студента
 * 
 * Класс ZombiStudent наследуется от Entity и реализует уникальную способность
 * "Учеба", которая позволяет временно увеличить силу атаки.
 */
class ZombiStudent : public Entity {
public:
    /**
     * @brief Конструктор зомби-студента
     * @param name Имя зомби-студента
     * @param health Здоровье зомби-студента
     * @param attack Сила атаки зомби-студента
     * @param ability Уникальная способность зомби-студента
     * @param price Цена зомби-студента
     */
    ZombiStudent(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-студент
     * @return true, если зомби-студент жив
     */
    bool isAlive() const override;
}; 