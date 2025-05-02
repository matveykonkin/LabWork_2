/**
 * @file Entity.h
 * @brief Заголовочный файл для базового класса сущности
 */

#pragma once
#include <string>
#include <iostream>

/**
 * @class Entity
 * @brief Базовый класс для всех сущностей в игре
 * 
 * Класс Entity представляет собой базовый класс для всех игровых сущностей,
 * определяющий общий интерфейс и базовую функциональность.
 */
class Entity {
protected:
    std::string name;        ///< Имя сущности
    int health;              ///< Текущее здоровье
    int maxHealth;           ///< Максимальное здоровье
    int attack;              ///< Сила атаки
    std::string uniqueAbility;
    int price;
    bool skipTurn = false;
    bool abilitiesLocked = false;
    
public:
    /**
     * @brief Конструктор сущности
     * @param name Имя сущности
     * @param health Здоровье сущности
     * @param attack Сила атаки сущности
     * @param ability Уникальная способность сущности
     * @param price Цена сущности
     */
    Entity(const std::string& name, int health, int attack, 
           const std::string& ability, int price);

    /**
     * @brief Виртуальный деструктор
     */
    virtual ~Entity() = default;
    
    /**
     * @brief Получить имя сущности
     * @return Имя сущности
     */
    const std::string& getName() const { return name; }

    /**
     * @brief Получить текущее здоровье
     * @return Текущее здоровье
     */
    int getHealth() const { return health; }

    /**
     * @brief Получить максимальное здоровье
     * @return Максимальное здоровье
     */
    int getMaxHealth() const { return maxHealth; }

    /**
     * @brief Получить силу атаки
     * @return Сила атаки
     */
    int getAttack() const { return attack; }

    /**
     * @brief Получить урон
     * @param damage Количество урона
     */
    virtual void takeDamage(int damage) = 0;

    /**
     * @brief Проверить, жива ли сущность
     * @return true, если сущность жива
     */
    virtual bool isAlive() const = 0;

    /**
     * @brief Использовать уникальную способность
     * @param target Цель способности
     */
    virtual void useUniqueAbility(Entity* target) = 0;
    
    virtual void setAbilitiesLocked(bool locked) { abilitiesLocked = locked; }
    virtual void setSkipTurn(bool skip) { skipTurn = skip; }
    virtual void setAttack(int value) { attack = value; }
    
    const std::string& getAbilityName() const { return uniqueAbility; }
    int getPrice() const { return price; }
};