#include "CyberZombi.h"
#include <iostream>

class CyberZombi : public Entity {
    public:
        CyberZombi() : Entity("Cyber Zombi", 150, 25, "Взлом") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (отключает способности противника)" << std::endl;
            // Логика отключения способностей противника
        }
    };