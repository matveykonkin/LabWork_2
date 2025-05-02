/**
 * @file CyberZombi.h
 * @brief Заголовочный файл для класса CyberZombi
 */

#pragma once

#include "Entity.h"

/**
 * @class CyberZombi
 * @brief Класс, представляющий кибер-зомби
 * 
 * Класс CyberZombi наследуется от Entity и реализует уникальную способность
 * "Кибер-атака", которая позволяет наносить дополнительный урон.
 */
class CyberZombi : public Entity {
public:
    /**
     * @brief Конструктор кибер-зомби
     * @param name Имя кибер-зомби
     * @param health Здоровье кибер-зомби
     * @param attack Сила атаки кибер-зомби
     * @param ability Уникальная способность кибер-зомби
     * @param price Цена кибер-зомби
     */
    CyberZombi(const std::string& name, int health, int attack,
               const std::string& ability, int price);

    /**
     * @brief Использовать уникальную способность
     * @param target Цель способности
     */
    void useUniqueAbility(Entity* target) override;

    /**
     * @brief Получить урон
     * @param damage Количество урона
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверить, жив ли кибер-зомби
     * @return true, если кибер-зомби жив
     */
    bool isAlive() const override;
}; 