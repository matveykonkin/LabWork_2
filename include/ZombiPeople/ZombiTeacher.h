/**
 * @file ZombiTeacher.h
 * @brief Заголовочный файл класса ZombiTeacher (учитель-зомби).
 */

#ifndef ZOMBI_TEACHER_H
#define ZOMBI_TEACHER_H

#include "Entity.h"

/**
 * @class ZombiTeacher
 * @brief Класс, реализующий зомби-учителя.
 * @details Наследуется от Entity и реализует уникальную способность атаки.
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
     * @brief Обрабатывает получение урона.
     * @param damage Количество полученного урона.
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверяет, жив ли зомби-учитель.
     * @return true, если здоровье больше 0, иначе false.
     */
    bool isAlive() const override;

    /**
     * @brief Использует уникальную способность зомби-учителя.
     * @param target Цель для атаки (указатель на Entity).
     * @details Может, например, "читать лекцию", замедляя цель.
     */
    void useUniqueAbility(Entity* target) override;
};

#endif