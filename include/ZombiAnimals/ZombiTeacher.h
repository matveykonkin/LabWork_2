/**
 * @file ZombiTeacher.h
 * @brief Заголовочный файл для класса ZombiTeacher
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiTeacher
 * @brief Класс, представляющий зомби-учителя
 * 
 * Класс ZombiTeacher наследуется от Entity и реализует уникальную способность
 * "Обучение", которая позволяет учить других сущностей.
 */
class ZombiTeacher : public Entity {
public:
    /**
     * @brief Конструктор зомби-учителя
     * @param name Имя зомби-учителя
     * @param health Здоровье зомби-учителя
     * @param attack Сила атаки зомби-учителя
     * @param ability Уникальная способность зомби-учителя
     * @param price Цена зомби-учителя
     */
    ZombiTeacher(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-учитель
     * @return true, если зомби-учитель жив
     */
    bool isAlive() const override;
}; 