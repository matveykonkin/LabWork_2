/**
 * @file Bodybuilder.h
 * @brief Заголовочный файл для класса Bodybuilder
 */

#pragma once

#include "Entity.h"

/**
 * @class Bodybuilder
 * @brief Класс, представляющий бодибилдера
 * 
 * Класс Bodybuilder наследуется от Entity и реализует уникальную способность
 * "Накачка мышц", которая позволяет временно увеличить атаку.
 */
class Bodybuilder : public Entity {
public:
    /**
     * @brief Конструктор бодибилдера
     * @param name Имя бодибилдера
     * @param health Здоровье бодибилдера
     * @param attack Сила атаки бодибилдера
     * @param ability Уникальная способность бодибилдера
     * @param price Цена бодибилдера
     */
    Bodybuilder(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли бодибилдер
     * @return true, если бодибилдер жив
     */
    bool isAlive() const override;
}; 