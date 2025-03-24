#include "Drone.h"
#include <iostream>

class Drone : public Entity {
    public:
        Drone() : Entity("Drone", 80, 15, "Разведка") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (показывает уникальную способность противника противника)" << std::endl;
            // Логика показа уникальной способности
        }
    };