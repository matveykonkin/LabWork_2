#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
protected:
    std::string name;
    int health;
    int attack;
    std::string uniqueAbility;  
    int maxHealth;
    int price;

public:
    Entity(const std::string& name, int health, int attack, const std::string& ability, int price) 
        : name(name), health(health), maxHealth(health), attack(attack), uniqueAbility(ability), price(price) {}
    
    void takeDamage(int damage);
    bool isAlive() const;
    void output() const;
    virtual void useUniqueAbility(Entity* target = nullptr) {}
    virtual void useUniqueAbility();
    virtual void setSkipTurn(bool skip);
    virtual void setAbilitiesLocked(bool locked);
    virtual void setAttack(int attack);
    const std::string& getName() const {
        return name;
    }
    int getHealth() const {
        return health;
    }
    int getAttack() const {
        return attack;
    }
    const std::string& getAbilityName() const {
        return uniqueAbility;
    }
    int getMaxHealth() const { 
        return maxHealth;
    }
    int getPrice() const {
        return price;
    }

};

#endif 