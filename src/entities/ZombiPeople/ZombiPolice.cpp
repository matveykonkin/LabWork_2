#include "ZombiPolice.h"
#include <iostream>

class ZombiPolice : public Entity {
    public:
        ZombiPolice() : Entity("Zombi Police", 100, 20, "Арест") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (противник пропускает ход)" << std::endl;
            // Логика блокировки способности противника
        }
    };