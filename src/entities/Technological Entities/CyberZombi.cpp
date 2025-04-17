#include "CyberZombi.h"
#include <iostream>

CyberZombi::CyberZombi() : 
    Entity("Cyber Zombi", 150, 25, "Взлом", 230) {}

void CyberZombi::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (отключает способности противника)" << std::endl;
            if (auto* enemy = dynamic_cast<Entity*>(target)) {
                enemy->setAbilitiesLocked(true); 
            }
}