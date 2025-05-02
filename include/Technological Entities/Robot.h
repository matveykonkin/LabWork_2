/**
 * @file Robot.h
 * @brief Заголовочный файл класса Robot (робот).
 */

#ifndef ROBOT_H
#define ROBOT_H

#include "Entity.h"

/**
 * @class Robot
 * @brief Класс, реализующий робота.
 * @details Наследуется от Entity и реализует уникальную способность перезагрузки.
 */
class Robot : public Entity {
public:
    /**
     * @brief Конструктор робота
     * @param name Имя робота
     * @param health Здоровье робота
     * @param attack Сила атаки робота
     * @param ability Уникальная способность робота
     * @param price Цена робота
     */
    Robot(const std::string& name, int health, int attack,
          const std::string& ability, int price);

    /**
     * @brief Обрабатывает получение урона.
     * @param damage Количество полученного урона.
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверяет, жив ли робот.
     * @return true, если здоровье больше 0, иначе false.
     */
    bool isAlive() const override;

    /**
     * @brief Использует уникальную способность робота.
     * @param target Цель для атаки (указатель на Entity).
     * @details Может перезагружаться, восстанавливая здоровье.
     */
    void useUniqueAbility(Entity* target) override;
};

#endif 