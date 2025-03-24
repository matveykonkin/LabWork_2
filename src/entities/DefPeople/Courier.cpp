#include "Courier.h"
#include <iostream>
 
class Courier : public Entity {
    public:
        Courier() : Entity("Courier", 75, 9, "Быстрая доставка") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (делает два хода подряд)" << std::endl;
            // Логика для двух ходов подряд
        }
    };