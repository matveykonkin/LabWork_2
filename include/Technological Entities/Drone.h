/**
 * @file Drone.h
 * @brief Заголовочный файл класса Drone (дрон).
 */

#ifndef DRONE_H
#define DRONE_H

#include "Entity.h"

/**
 * @class Drone
 * @brief Класс, реализующий дрон.
 * @details Наследуется от Entity и реализует уникальную способность разведки.
 */
class Drone : public Entity {
public:
    /**
     * @brief Конструктор дрона
     * @param name Имя дрона
     * @param health Здоровье дрона
     * @param attack Сила атаки дрона
     * @param ability Уникальная способность дрона
     * @param price Цена дрона
     */
    Drone(const std::string& name, int health, int attack,
          const std::string& ability, int price);

    /**
     * @brief Обрабатывает получение урона.
     * @param damage Количество полученного урона.
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверяет, жив ли дрон.
     * @return true, если здоровье больше 0, иначе false.
     */
    bool isAlive() const override;

    /**
     * @brief Использует уникальную способность дрона.
     * @param target Цель для разведки (указатель на Entity).
     * @details Может разведывать способности противника.
     */
    void useUniqueAbility(Entity* target) override;
};

#endif 