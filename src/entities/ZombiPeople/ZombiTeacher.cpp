#include "ZombiTeacher.h"
#include <iostream>

class ZombiTeacher : public Entity {
    public:
        ZombiTeacher() : Entity("Zombi Teacher", 85, 12, "Мотивация", 140) {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает атаку и защиту)" << std::endl;
            attack += 5;
            health += 20;
        }
    };