#include "ZombiDog.h"
#include <iostream>

class ZombiDog : public Entity {
    public:
        ZombiDog() : Entity("Zombi Dog", 100, 20, "Защита", 160) {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает защиту)" << std::endl;
            health += 30;  
        }
    };