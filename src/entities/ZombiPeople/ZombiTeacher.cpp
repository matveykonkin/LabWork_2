/**
 * @file ZombiTeacher.cpp
 * @brief Реализация класса ZombiTeacher (зомби-учитель).
 */

#include "ZombiPeople/ZombiTeacher.h"
#include <iostream>

/**
 * @brief Конструктор ZombiTeacher.
 * @param name Имя зомби-учителя
 * @param health Здоровье зомби-учителя
 * @param attack Сила атаки зомби-учителя
 * @param ability Уникальная способность зомби-учителя
 * @param price Цена зомби-учителя
 */
ZombiTeacher::ZombiTeacher(const std::string& name, int health, int attack, 
                           const std::string& ability, int price) : 
    Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiTeacher::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли зомби-учитель.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiTeacher::isAlive() const {
    return health > 0;
}

/**
 * @brief Активирует способность "Мотивация".
 * @param target Не используется (но требуется по интерфейсу).
 * @details Увеличивает атаку на 5 и здоровье на 20.
 *          Выводит сообщение в консоль о применении способности.
 */
void ZombiTeacher::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << name << " использует способность: " << uniqueAbility << "!" << std::endl;
    attack += 5;
    health += 20;
}