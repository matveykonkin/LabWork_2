#include "Banker.h"
#include <iostream>

class Banker : public Entity {
    public:
        Banker() : Entity("Banker", 85, 11, "Кредит") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (временно увеличивает монеты)" << std::endl;
            // Логика временного увеличения монет
        }
    };