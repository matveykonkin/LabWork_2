#include "Military.h"
#include <iostream>

class Soldier : public Entity {
    public:
        Soldier() : Entity("Soldier", 120, 18, "Штурм") {}
    
        void useUniqueAbility() override {
            std::cout << name << " использует способность: " << uniqueAbility << " (наносит урон и снижает защиту противника)" << std::endl;
            // Логика снижения защиты противника
        }
    };