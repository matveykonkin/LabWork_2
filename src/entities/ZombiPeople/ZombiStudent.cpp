#include "Entity.h"
#include <iostream>

class ZombieStudent : public Entity {
public:
    ZombieStudent() : Entity("Zombie Student", 80, 15, "Шпаргалка") {}

    void useUniqueAbility() override {
        std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает шанс на успешную атаку)" << std::endl;
        attack += 10;  
    }
};