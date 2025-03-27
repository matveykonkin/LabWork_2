#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Entity.h"  
#include "Player.h"  
#include "AI.h"      

class BattleSystem {
private:
    Entity& player1;  
    Entity& player2;  
    bool isPvPMode;   

public:
    BattleSystem(Entity& p1, Entity& p2, bool isPvP = false);
    
    void startBattle();
    void playerTurn(Player& player, Entity& enemy);
    void aiTurn(AI& ai, Entity& player);
    bool isBattleOver() const;
    void displayBattleStatus() const;
    void debuffAllEnemies(float multiplier);
    void grantExtraTurn(Entity* entity);
};

#endif 