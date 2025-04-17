#pragma once
#include "Entity.h"
#include <iostream>

class EliteZombiProfessor : public Entity {
public:
    EliteZombiProfessor() : 
        Entity("Профессор-зомби", 150, 25, "Экзамен", 100) {}
    
    void useUniqueAbility(Entity* target) override {
        std::cout << "Заваливает экзаменом! (-40 урона)" << std::endl;
        target->takeDamage(40);
    }
};