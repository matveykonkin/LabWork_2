#ifndef CHILD_H
#define CHILD_H

#include "Entity.h"

class Child : public Entity {
public:
    /**
     * @brief Конструктор ребенка
     * @param name Имя ребенка
     * @param health Здоровье ребенка
     * @param attack Сила атаки ребенка
     * @param ability Уникальная способность ребенка
     * @param price Цена ребенка
     */
    Child(const std::string& name, int health, int attack, 
          const std::string& ability, int price);
    
    // Обязательные методы из Entity
    void takeDamage(int damage) override;
    bool isAlive() const override;
    void useUniqueAbility(Entity* target) override;
    
    // Дополнительные методы
    void debuffEnemy(Entity* target, float multiplier);
};

#endif