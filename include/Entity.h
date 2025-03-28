#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
protected:
    std::string name;
    int health;
    int maxHealth;
    int attack;
    std::string uniqueAbility;  
    int price;
    bool skipTurn = false;
    bool abilitiesLocked = false;

public:
    Entity(const std::string& name, int health, int attack, const std::string& ability, int price);
    void takeDamage(int damage);
    void output() const;
    virtual void useUniqueAbility(Entity* target) = 0;
    virtual void setAbilitiesLocked(bool locked);
    virtual void setAttack(int attack);
    virtual void setSkipTurn(bool skip);
    virtual bool isAlive() const;
    virtual ~Entity();

    bool shouldSkipTurn() const { 
        return skipTurn; 
    }
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