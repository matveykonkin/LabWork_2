#include "Scientist.h"
#include <iostream>

class Scientist : public Entity {
    public:
        Scientist() : Entity("Scientist", 70, 10, "Изобретение", 140) {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает атаку и защиту)" << std::endl;
            attack += 10;
            health += 20;
        }
    };