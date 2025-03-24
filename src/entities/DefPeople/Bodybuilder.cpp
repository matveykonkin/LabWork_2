#include "Bodybuilder.h"
#include <iostream>

class Bodybuilder : public Entity {
    public:
        Bodybuilder() : Entity("Bodybuilder", 150, 15, "Суперсила") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (удваивает урон)" << std::endl;
            attack *= 2;  
        }
    };