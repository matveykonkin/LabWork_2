/**
 * @file ZombiStudent.cpp
 * @brief Реализация класса ZombiStudent (зомби-студент).
 */

#include "ZombiPeople/ZombiStudent.h"
#include <iostream>

/**
 * @brief Конструктор ZombiStudent.
 * @param name Имя зомби-студента
 * @param health Здоровье зомби-студента
 * @param attack Сила атаки зомби-студента
 * @param ability Уникальная способность зомби-студента
 * @param price Цена зомби-студента
 */
ZombiStudent::ZombiStudent(const std::string& name, int health, int attack, 
                          const std::string& ability, int price) : 
    Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiStudent::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли зомби-студент.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiStudent::isAlive() const {
    return health > 0;
}

/**
 * @brief Активирует способность "Шпаргалка".
 * @param target Не используется (но требуется по интерфейсу).
 * @details Увеличивает атаку на 10.
 *          Выводит сообщение в консоль о применении способности.
 */
void ZombiStudent::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << name << " использует способность: " << uniqueAbility << "!" << std::endl;
    attack += 10;  
}