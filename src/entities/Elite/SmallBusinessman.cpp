#include "SmallBusinessman.h"
#include <iostream>

class SmallBusinessman : public Entity {
    public:
        SmallBusinessman() : Entity("Small Businessman", 75, 9, "Торговля") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (обменивает монеты на улучшения)" << std::endl;
            // Логика обмена монет на улучшения
        }
    };