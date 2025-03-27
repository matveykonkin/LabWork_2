#include "Child.h"
#include "BattleSystem.h"
#include <iostream>

class Child : public Entity {
    public:
        Child() : Entity("Child", 60, 8, "Плач", 90) {}
    
        void Child::useUniqueAbility(BattleSystem& battleSystem) {
            std::cout << name << " использует способность: " << uniqueAbility << " (снижает атаку противника)" << std::endl;   
            battleSystem.debuffAllEnemies(0.75);
        }
    };