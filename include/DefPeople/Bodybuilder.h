#ifndef BODYBUILDER_H
#define BODYBUILDER_H

#include "Entity.h"

class Bodybuilder : public Entity {
public:
    /**
     * @brief Конструктор бодибилдера
     * @param name Имя бодибилдера
     * @param health Здоровье бодибилдера
     * @param attack Сила атаки бодибилдера
     * @param ability Уникальная способность бодибилдера
     * @param price Цена бодибилдера
     */
    Bodybuilder(const std::string& name, int health, int attack, 
                const std::string& ability, int price);
    
    // Обязательные методы из Entity
    void takeDamage(int damage) override;
    bool isAlive() const override;
    void useUniqueAbility(Entity* target) override;
};

#endif