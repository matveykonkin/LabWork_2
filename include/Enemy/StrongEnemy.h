#pragma once
#include "Entity.h"
#include <iostream>

class EliteZombiProfessor : public Entity {
public:
    EliteZombiProfessor();
    
    void takeDamage(int damage) override;
    bool isAlive() const override;
    void useUniqueAbility(Entity* target) override;
    
    void attackTarget(Entity* target);
};