/**
 * @file ZombiDoctor.cpp
 * @brief Реализация класса ZombiDoctor (зомби-доктор).
 */

#include "ZombiPeople/ZombiDoctor.h"
#include <iostream>

/**
 * @brief Конструктор ZombiDoctor.
 * @param name Имя зомби-доктора
 * @param health Здоровье зомби-доктора
 * @param attack Сила атаки зомби-доктора
 * @param ability Уникальная способность зомби-доктора
 * @param price Цена зомби-доктора
 */
ZombiDoctor::ZombiDoctor(const std::string& name, int health, int attack, 
                         const std::string& ability, int price) : 
    Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiDoctor::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли зомби-доктор.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiDoctor::isAlive() const {
    return health > 0;
}

/**
 * @brief Активирует способность "Лечение".
 * @param target Не используется (но требуется по интерфейсу).
 * @details Восстанавливает 30 здоровья (но не более максимума в 90).
 *          Выводит сообщение в консоль о применении способности.
 */
void ZombiDoctor::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << name << " использует способность: " << uniqueAbility << "!" << std::endl;
    health += 30;
    if (health > 90) health = 90;  
}