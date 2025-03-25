#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
protected:
    std::string name;
    int health;
    int attack;
    std::string uniqueAbility;  

public:
    Entity(const std::string& name, int health, int attack, const std::string& uniqueAbility);

    void takeDamage(int damage);
    bool isAlive() const;
    void output() const;
    virtual void useUniqueAbility();
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
};

#endif 