#include "Enemy/WeakEnemy.h"

WeakZombiStudent::WeakZombiStudent() : 
    Entity("Слабый студент", 50, 3, "Шпаргалка", 20) {}

void WeakZombiStudent::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

bool WeakZombiStudent::isAlive() const {
    return health > 0;
}

void WeakZombiStudent::useUniqueAbility(Entity* target) {
    std::cout << "Готовит шпаргалку (без непосредственного эффекта)" << std::endl;
}

void WeakZombiStudent::attackTarget(Entity* target) {
    std::cout << "Кидает шпаргалку! (-2 урона)" << std::endl;
    target->takeDamage(2);
}