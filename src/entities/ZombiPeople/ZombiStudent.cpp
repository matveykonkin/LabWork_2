#include "/home/matvey/Документы/SimpleList/matveyKonkin83/LabWork_2/include/ZombiPeople/ZombiStudent.h"
#include <iostream>

ZombiStudent::ZombiStudent() :
    Entity("Zombi Student", 80, 15, "Шпаргалка", 135) {}

void ZombiStudent::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает шанс на успешную атаку)" << std::endl;
    attack += 10;  
}
   