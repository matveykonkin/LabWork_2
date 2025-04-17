#include "Robot.h"
#include <iostream>

Robot::Robot() : 
    Entity("Robot", 120, 25, "Перезагрузка", 200) {}

void Robot::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (восстанавливает здоровье)" << std::endl;
            health += 50;  
            if (health > 120) health = 120;  
}