// include/Card/Card.h  
#ifndef CARD_H  
#define CARD_H  

#include "Entity.h"  
#include <string>  

class Card {  
private:  
    Entity& entity; 

public:  
    Card(Entity& entity);  
    void render() const; 
    const std::string& getName() const;  
    int getHealth() const;  
    int getAttack() const;  
    const std::string& getAbilityName() const;  
    int getPrice() const;
};  

#endif  