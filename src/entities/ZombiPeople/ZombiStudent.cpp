#include "ZombiPeople/ZombiStudent.h"
#include <iostream>

ZombiStudent::ZombiStudent() :
    Entity("Zombi Student", 80, 15, "Шпаргалка", 135) {}

void ZombiStudent::useUniqueAbility(Entity*) {
    std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает шанс на успешную атаку)" << std::endl;
    attack += 10;  
}
   