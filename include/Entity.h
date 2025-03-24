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
};

#endif 