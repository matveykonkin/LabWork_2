#pragma once
#include "Entity.h"

class Military : public Entity {
public:
    /**
     * @brief Конструктор военного
     * @param name Имя военного
     * @param health Здоровье военного
     * @param attack Сила атаки военного
     * @param ability Уникальная способность военного
     * @param price Цена военного
     */
    Military(const std::string& name, int health, int attack, 
             const std::string& ability, int price);
    void takeDamage(int damage) override;
    bool isAlive() const override;
    void useUniqueAbility(Entity* target) override;
};