#include "ZombiStudent.h"
#include <iostream>

class ZombiStudent : public Entity {
    public:
        ZombiStudent() : Entity("Zombi Student", 80, 15, "Шпаргалка", 135) {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает шанс на успешную атаку)" << std::endl;
            attack += 10;  
        }
    };