#pragma once
#include "Entity.h"

class Scientist : public Entity {
public:
    /**
     * @brief Конструктор ученого
     * @param name Имя ученого
     * @param health Здоровье ученого
     * @param attack Сила атаки ученого
     * @param ability Уникальная способность ученого
     * @param price Цена ученого
     */
    Scientist(const std::string& name, int health, int attack, 
              const std::string& ability, int price);
    void takeDamage(int damage) override;
    bool isAlive() const override;
    void useUniqueAbility(Entity* target) override;
};