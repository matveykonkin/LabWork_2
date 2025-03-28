#ifndef PLAYER_H  
#define PLAYER_H  

#include "Entity.h"
#include "CoinSystem.h"  

class Player : public Entity {  
private:  
    int coins = 0;  
    bool abilityUsed = false;  

public:  
    Player(const std::string& name, int health, int attack, const std::string& ability, int price);  
    void addCoins(int amount);  
    bool spendCoins(int amount);  
    bool canUseAbility() const;  
    void markAbilityUsed();  
    void useUniqueAbility();
};  

#endif  