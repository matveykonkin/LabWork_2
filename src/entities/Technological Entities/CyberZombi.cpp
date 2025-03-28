#include "CyberZombi.h"
#include <iostream>

class CyberZombi : public Entity {
    public:
        CyberZombi() : Entity("Cyber Zombi", 150, 25, "Взлом", 230) {}
    
        void useUniqueAbility(Entity* target) override {
            std::cout << name << " использует способность: " << uniqueAbility << " (отключает способности противника)" << std::endl;
            if (auto* enemy = dynamic_cast<Entity*>(target)) {
                enemy->setAbilitiesLocked(true); 
            }
        }
    };