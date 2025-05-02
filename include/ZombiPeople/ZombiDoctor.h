/**
 * @file ZombiDoctor.h
 * @brief Заголовочный файл класса ZombiDoctor (доктор-зомби).
 */

#ifndef ZOMBI_DOCTOR_H
#define ZOMBI_DOCTOR_H

#include "Entity.h"

/**
 * @class ZombiDoctor
 * @brief Класс, реализующий зомби-доктора.
 * @details Наследуется от Entity и реализует уникальную способность лечения.
 */
class ZombiDoctor : public Entity {
public:
    /**
     * @brief Конструктор зомби-доктора
     * @param name Имя зомби-доктора
     * @param health Здоровье зомби-доктора
     * @param attack Сила атаки зомби-доктора
     * @param ability Уникальная способность зомби-доктора
     * @param price Цена зомби-доктора
     */
    ZombiDoctor(const std::string& name, int health, int attack, 
                const std::string& ability, int price);

    /**
     * @brief Обрабатывает получение урона.
     * @param damage Количество полученного урона.
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверяет, жив ли зомби-доктор.
     * @return true, если здоровье больше 0, иначе false.
     */
    bool isAlive() const override;

    /**
     * @brief Использует уникальную способность зомби-доктора.
     * @param target Цель для лечения (указатель на Entity).
     * @details Может восстанавливать здоровье себе или союзникам.
     */
    void useUniqueAbility(Entity* target) override;
};

#endif