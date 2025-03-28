#include "Drone.h"
#include <iostream>

class Drone : public Entity {
    public:
        Drone() : Entity("Drone", 80, 15, "Разведка", 120) {}
    
        void useUniqueAbility(Entity* target) override {
            std::cout << name << " использует способность: " << uniqueAbility << " (показывает уникальную способность противника противника)"
                      << target->getAbilityName() << "\n";
        }
    };