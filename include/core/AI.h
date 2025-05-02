/**
 * @file AI.h
 * @brief Заголовочный файл для класса искусственного интеллекта
 */

#pragma once

#include "Entity.h"

/**
 * @class AI
 * @brief Класс, представляющий искусственный интеллект в игре
 * 
 * Класс AI наследуется от Entity и реализует логику принятия решений
 * для автоматического управления сущностью в бою.
 */
class AI : public Entity {
private:
    bool abilityUsed;  ///< Флаг использования способности

public:
    /**
     * @brief Конструктор ИИ
     * @param name Имя ИИ
     * @param health Здоровье ИИ
     * @param attack Сила атаки ИИ
     * @param ability Уникальная способность ИИ
     * @param price Цена ИИ
     */
    AI(const std::string& name, int health, int attack,
       const std::string& ability, int price);

    /**
     * @brief Сделать ход
     * @param target Цель атаки
     */
    void makeMove(Entity& target);

    /**
     * @brief Получить статус использования способности
     * @return true, если способность была использована
     */
    bool getAbilityUsed() const;

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
     * @brief Проверить, жив ли ИИ
     * @return true, если ИИ жив
     */
    bool isAlive() const override;
};