#include "core/CardSystem.h"  
#include <iostream>  

Card::Card(Entity& entity) : entity(entity) {}  

void Card::render() const {  
    std::cout << "Карта: " << entity.getName() << "\n"  
              << "Здоровье: " << entity.getHealth() << "\n"  
              << "Атака: " << entity.getAttack() << "\n"  
              << "Способность: " << entity.getAbilityName() << "\n"
              << "Цена: " << entity.getPrice() << "\n\n";  
}  

const std::string& Card::getName() const { 
    return entity.getName(); 
}  
int Card::getHealth() const { 
    return entity.getHealth(); 
}  
int Card::getAttack() const { 
    return entity.getAttack(); 
}  
const std::string& Card::getAbilityName() const { 
    return entity.getAbilityName();
}  
int Card::getPrice() const { 
    return entity.getPrice();
}  