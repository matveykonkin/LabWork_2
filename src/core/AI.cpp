#include "core/AI.h"  
#include "Entity.h"
#include <cstdlib>  

AI::AI(const std::string& name, int health, int attack, const std::string& ability, int price)  
    : Entity(name, health, attack, ability, price) {}  

void AI::makeMove(Entity& target) {  
    if (rand() % 2 == 0 && !abilityUsed) {     
        abilityUsed = true;  
    } else {  
        target.takeDamage(getAttack());  
    }  
}  

bool AI::getAbilityUsed() const {
    return abilityUsed;  
}