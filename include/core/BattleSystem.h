#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Entity.h"
#include <iostream>

class BattleSystem {
private:
    Entity& player1;  
    Entity& player2;  
    bool player1UsedAbility = false;
    bool player2UsedAbility = false;

public:
    BattleSystem(Entity& p1, Entity& p2);
    void startBattle(bool isPlayerVsAI);
    void playerTurn(Entity& attacker, Entity& defender, bool& abilityUsed);
    void aiTurn(Entity& ai, Entity& player);
};

#endif