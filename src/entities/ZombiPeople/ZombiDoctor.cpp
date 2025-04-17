#include "ZombiDoctor.h"
#include <iostream>

ZombiDoctor::ZombiDoctor() : 
    Entity("Zombi Doctor", 90, 10, "Лечение", 125) {}

void ZombiDoctor::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (восстанавливает 30 здоровья)" << std::endl;
            health += 30;
            if (health > 90) health = 90;  
}

