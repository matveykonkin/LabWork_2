#pragma once
#include "Entity.h"
#include <iostream>

class WeakZombiStudent : public Entity {
public:
    WeakZombiStudent();
    
    // Реализация чисто виртуальных методов Entity
    void takeDamage(int damage) override;
    bool isAlive() const override;
    void useUniqueAbility(Entity* target) override;
    
    // Дополнительный метод для работы с целью
    void attackTarget(Entity* target);
};