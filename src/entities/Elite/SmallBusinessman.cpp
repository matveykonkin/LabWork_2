#include "Elite/SmallBusinessman.h"
#include "Entity.h"
#include <iostream>
#include <stdexcept>

/**
 * @brief Конструктор малого бизнесмена
 * @param name Имя бизнесмена
 * @param health Здоровье бизнесмена
 * @param attack Сила атаки бизнесмена
 * @param ability Уникальная способность бизнесмена
 * @param price Цена бизнесмена
 */
SmallBusinessman::SmallBusinessman(const std::string& name, int health, int attack,
                                  const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void SmallBusinessman::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли бизнесмен.
 * @return true, если здоровье больше 0, иначе false.
 */
bool SmallBusinessman::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность бизнесмена
 * @param target Цель способности
 * @details Увеличивает атаку союзника на 30%
 */
void SmallBusinessman::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (увеличивает атаку союзника)\n";
    target->setAttack(target->getAttack() * 1.3);
}