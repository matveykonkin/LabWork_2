#ifndef AI_H  
#define AI_H  

#include "/home/matvey/Документы/SimpleList/matveyKonkin83/LabWork_2/include/Entity.h"

class AI : public Entity {  
private:
    bool abilityUsed = false;  

public:  
    AI(const std::string& name, int health, int attack, const std::string& ability);  
    void makeMove(Entity& target);  
    bool getAbilityUsed() const;
};  

#endif  