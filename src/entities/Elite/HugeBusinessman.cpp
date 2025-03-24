#include "HugeBusinessman.h"
#include <iostream>

class Businessman : public Entity {
    public:
        Businessman() : Entity("Businessman", 90, 12, "Инвестиция") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает доход от монет)" << std::endl;
            // Логика увеличения дохода
        }
    };