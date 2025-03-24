#ifndef COURIER_H
#define COURIER_H

#include "Entity.h"

class Courier : public Entity {
public:
    Courier();
    void useUniqueAbility() override;
};

#endif 