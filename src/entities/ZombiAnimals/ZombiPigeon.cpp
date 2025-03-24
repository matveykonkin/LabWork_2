#include "ZombiPigeon.h"
#include <iostream>

class ZombiPigeon : public Entity {
    public:
        ZombiPigeon() : Entity("Zombi Pigeon", 60, 10, "Посылка") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (восстанавливает здоровье)" << std::endl;
            health += 20;
        }
    };