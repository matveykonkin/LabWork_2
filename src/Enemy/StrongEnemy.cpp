#include "Enemy/StrongEnemy.h"

EliteZombiProfessor::EliteZombiProfessor() : 
    Entity("Профессор-зомби", 150, 25, "Экзамен", 100) {}

void EliteZombiProfessor::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

bool EliteZombiProfessor::isAlive() const {
    return health > 0;
}

void EliteZombiProfessor::useUniqueAbility(Entity* target) {
    std::cout << "Готовит экзамен (способность активирована)" << std::endl;
}

void EliteZombiProfessor::attackTarget(Entity* target) {
    std::cout << "Заваливает экзаменом! (-40 урона)" << std::endl;
    target->takeDamage(40);
}