#include "Military.h"
#include "Entity.h"
#include <iostream>

class Soldier : public Entity {
    public:
        Soldier() : Entity("Soldier", 120, 18, "Штурм", 185) {}
    
        void useUniqueAbility(Entity* target) override {
            std::cout << name << " использует способность: " << uniqueAbility << " (наносит урон и снижает атаку противника)" << std::endl;
            target->takeDamage(attack);
            target->setAttack(target->getAttack() - 10);
        }
    };