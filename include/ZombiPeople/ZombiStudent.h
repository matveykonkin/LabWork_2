/**
 * @file ZombiStudent.h
 * @brief Заголовочный файл класса ZombiStudent (студент-зомби).
 */

#ifndef ZOMBI_STUDENT_H
#define ZOMBI_STUDENT_H

#include "Entity.h"

/**
 * @class ZombiStudent
 * @brief Класс, реализующий зомби-студента.
 * @details Наследуется от Entity и реализует уникальную способность шпаргалки.
 */
class ZombiStudent : public Entity {
public:
    /**
     * @brief Конструктор ZombiStudent.
     * @param name Имя зомби-студента
     * @param health Здоровье зомби-студента
     * @param attack Сила атаки зомби-студента
     * @param ability Уникальная способность зомби-студента
     * @param price Цена зомби-студента
     */
    ZombiStudent(const std::string& name, int health, int attack, 
                 const std::string& ability, int price);

    /**
     * @brief Обрабатывает получение урона.
     * @param damage Количество полученного урона.
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверяет, жив ли зомби-студент.
     * @return true, если здоровье больше 0, иначе false.
     */
    bool isAlive() const override;

    /**
     * @brief Использует уникальную способность зомби-студента.
     * @param target Цель для атаки (указатель на Entity).
     * @details Может использовать "шпаргалку" для усиления атаки.
     */
    void useUniqueAbility(Entity* target) override;
};

#endif