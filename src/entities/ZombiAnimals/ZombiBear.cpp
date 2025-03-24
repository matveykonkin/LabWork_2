#include "ZombiBear.h"
#include <iostream>

class ZombiBear : public Entity {
    public:
        ZombiBear() : Entity("Zombi Bear", 200, 30, "Рык") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (снижает атаку противника)" << std::endl;
            // Логика снижения атаки противника
        }
    };