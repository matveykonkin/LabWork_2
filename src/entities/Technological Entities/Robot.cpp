#include "Robot.h"
#include <iostream>

class Robot : public Entity {
    public:
        Robot() : Entity("Robot", 120, 25, "Перезагрузка") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (восстанавливает здоровье)" << std::endl;
            health += 50;  
            if (health > 120) health = 120;  
        }
    };