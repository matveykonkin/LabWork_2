#include "Official.h"
#include <iostream>

class Official : public Entity {
    public:
        Official() : Entity("Official", 80, 10, "Коррупция") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (крадёт монеты у противника)" << std::endl;
            // Логика кражи монет
        }
    };