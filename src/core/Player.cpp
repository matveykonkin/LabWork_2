#include "Player.h"

Player::Player(const std::string& name, int health, int attack, const std::string& ability, int price)  
    : Entity(name, health, attack, ability, price) {}  

void Player::addCoins(int amount) { coins += amount; }  

bool Player::spendCoins(int amount) {  
    if (coins >= amount) {  
        coins -= amount;  
        return true;  
    }  
    return false;  
}  

bool Player::canUseAbility() const { return !abilityUsed; }  

void Player::markAbilityUsed() { abilityUsed = true; }  