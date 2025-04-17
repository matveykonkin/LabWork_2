#include "ZombiTeacher.h"
#include <iostream>

ZombiTeacher::ZombiTeacher() : 
    Entity("Zombi Teacher", 85, 12, "Мотивация", 140) {}

void ZombiTeacher::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает атаку и защиту)" << std::endl;
            attack += 5;
            health += 20;
}

