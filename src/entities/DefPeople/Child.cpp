#include "Child.h"
#include <iostream>

class Child : public Entity {
    public:
        Child() : Entity("Child", 60, 8, "Плач") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (снижает атаку противника)" << std::endl;    
        }
    };