/**
 * @file ZombiPigeon.h
 * @brief Заголовочный файл для класса ZombiPigeon
 */

#pragma once

#include "Entity.h"

/**
 * @class ZombiPigeon
 * @brief Класс, представляющий зомби-голубя
 * 
 * Класс ZombiPigeon наследуется от Entity и реализует уникальную способность
 * "Голубиная атака", которая позволяет наносить урон с шансом отравления.
 */
class ZombiPigeon : public Entity {
public:
    /**
     * @brief Конструктор зомби-голубя
     * @param name Имя зомби-голубя
     * @param health Здоровье зомби-голубя
     * @param attack Сила атаки зомби-голубя
     * @param ability Уникальная способность зомби-голубя
     * @param price Цена зомби-голубя
     */
    ZombiPigeon(const std::string& name, int health, int attack,
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
     * @brief Проверить, жив ли зомби-голубь
     * @return true, если зомби-голубь жив
     */
    bool isAlive() const override;
}; 