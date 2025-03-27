#include "ZombiPolice.h"
#include <iostream>

class ZombiPolice : public Entity {
public:
    ZombiPolice() : Entity("Zombi Police", 100, 20, "Арест", 180) {}
    
    void useUniqueAbility(Entity* target) override {
        std::cout << name << " использует способность: " << uniqueAbility << " (противник пропускает ход)" << std::endl;
        if (auto* enemy = dynamic_cast<Entity*>(target)) {
            enemy->setSkipTurn(true);
        }
    }
};