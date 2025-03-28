#include "Courier.h"
#include "BattleSystem.h"
#include <iostream>
 
class Courier : public Entity {
    public:
        Courier() : Entity("Courier", 75, 9, "Быстрая доставка", 150) {}
    
        void Courier::useUniqueAbility(BattleSystem battleSystem) {
            std::cout << name << " использует способность: " << uniqueAbility << " (делает два хода подряд)" << std::endl;
            battleSystem.grantExtraTurn(this);
        }
    };