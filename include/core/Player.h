/**
 * @file Player.h
 * @brief Заголовочный файл для класса игрока
 */

#pragma once
#include "Entity.h"
#include <iostream>
#include <stdexcept>

/**
 * @class Player
 * @brief Класс, представляющий игрока в игре
 * 
 * Класс Player наследуется от Entity и добавляет специфичную для игрока
 * функциональность, такую как управление монетами и использование способностей.
 */
class Player : public Entity {
protected:
    int coins = 0;
    bool abilityUsed = false;
    bool abilitiesLocked = false;
    bool skipTurn = false;
    
public:
    /**
     * @brief Конструктор игрока
     * @param name Имя игрока
     * @param health Здоровье игрока
     * @param attack Сила атаки игрока
     * @param ability Уникальная способность игрока
     * @param price Цена игрока
     */
    Player(const std::string& name, int health, int attack,
           const std::string& ability, int price);
    
    /**
     * @brief Проверить возможность использования способности
     * @return true, если способность можно использовать
     */
    bool canUseAbility() const;
    void markAbilityUsed();
    /**
     * @brief Использовать уникальную способность
     * @param target Цель способности
     */
    void useUniqueAbility(Entity* target) override;
    
    void addCoins(int amount);
    bool spendCoins(int amount);
    
    /**
     * @brief Получить урон
     * @param damage Количество урона
     */
    void takeDamage(int damage) override;
    /**
     * @brief Проверить, жив ли игрок
     * @return true, если игрок жив
     */
    bool isAlive() const override;

    void setAbilitiesLocked(bool locked);
    void setSkipTurn(bool skip);
};