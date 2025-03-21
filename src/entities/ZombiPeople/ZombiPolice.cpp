#include "Entity.h"
#include <iostream>

class ZombiePolice : public Entity {
public:
    ZombiePolice() : Entity("Zombie Police", 100, 20, "Арест") {}

    void useUniqueAbility() override {
        std::cout << name << " использует способность: " << uniqueAbility << " (противник пропускает ход)" << std::endl;
        //Позже реализую логику уникальной способности
    }
};