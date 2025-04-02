#include "ZombiWolf.h"
#include <iostream>

class ZombiWolf : public Entity {
    public:
        ZombiWolf() : Entity("Zombi Wolf", 120, 25, "Одиночка", 190) {}
    
        void useUniqueAbility() override {
            if (health < 50) {
                std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает атаку)" << std::endl;
                attack += 15;  
            }
        }
    };