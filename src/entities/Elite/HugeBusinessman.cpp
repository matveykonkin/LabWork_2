#include "HugeBusinessman.h"
#include "CoinSystem.h"
#include <iostream>

class HugeBusinessman : public Entity {
    public:
        HugeBusinessman() : Entity("HugeBusinessman", 90, 12, "Инвестиция", 135) {}
    
        void HugeBusinessman::useUniqueAbility(CoinSystem coinSystem) {
            std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает доход от монет)" << std::endl;
            coinSystem.setIncomeMultiplier(1.2);
        }
    };