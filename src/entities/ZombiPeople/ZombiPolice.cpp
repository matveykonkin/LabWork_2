/**
 * @file ZombiPolice.cpp
 * @brief Реализация класса ZombiPolice (зомби-полицейский).
 */

#include "ZombiPeople/ZombiPolice.h"
#include <iostream>

/**
 * @brief Конструктор ZombiPolice.
 * @param name Имя зомби-полицейского
 * @param health Здоровье зомби-полицейского
 * @param attack Сила атаки зомби-полицейского
 * @param ability Уникальная способность зомби-полицейского
 * @param price Цена зомби-полицейского
 */
ZombiPolice::ZombiPolice(const std::string& name, int health, int attack, 
                         const std::string& ability, int price) : 
    Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiPolice::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли зомби-полицейский.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiPolice::isAlive() const {
    return health > 0;
}

/**
 * @brief Активирует способность "Arrest".
 * @param target Цель для ареста (должна быть не nullptr).
 * @details Заставляет цель пропустить ход (вызывает setSkipTurn(true)).
 *          Выводит сообщение в консоль о применении способности.
 */
void ZombiPolice::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility 
              << " (противник пропускает ход)" << std::endl;
    if (target) {
        target->setSkipTurn(true);
    }
}