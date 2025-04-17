#pragma once
#include "Entity.h"
#include <iostream>

class WeakZombiStudent : public Entity {
public:
    WeakZombiStudent() : 
        Entity("Слабый студент", 50, 3, "Шпаргалка", 20) {}
    
    void useUniqueAbility(Entity* target) override {
        std::cout << "Кидает шпаргалку! (-2 урона)" << std::endl;
        target->takeDamage(2);
    }
};