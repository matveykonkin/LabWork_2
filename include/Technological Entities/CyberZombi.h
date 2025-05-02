/**
 * @file CyberZombi.h
 * @brief Заголовочный файл класса CyberZombi (кибер-зомби).
 */

#ifndef CYBER_ZOMBI_H
#define CYBER_ZOMBI_H

#include "Entity.h"

/**
 * @class CyberZombi
 * @brief Класс, реализующий кибер-зомби.
 * @details Наследуется от Entity и реализует уникальную способность взлома.
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
     * @brief Обрабатывает получение урона.
     * @param damage Количество полученного урона.
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверяет, жив ли кибер-зомби.
     * @return true, если здоровье больше 0, иначе false.
     */
    bool isAlive() const override;

    /**
     * @brief Использует уникальную способность кибер-зомби.
     * @param target Цель для атаки (указатель на Entity).
     * @details Может взламывать системы противника, отключая его способности.
     */
    void useUniqueAbility(Entity* target) override;
};

#endif 