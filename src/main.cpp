#include "ZombiPolice.h"
#include "ZombiStudent.h"
#include "CardSystem.h"
#include "BattleSystem.h"

int main() {
    ZombiPolice zombiPolice;
    Card zombiPoliceCard(zombiPolice);
    zombiPoliceCard.render();

    ZombiStudent zombiStudent;
    Card zombiStudentCard(zombiStudent);
    zombiStudentCard.render();

    // Режим PVP
    ZombiPolice pvpPlayer1;
    ZombiStudent pvpPlayer2;
    BattleSystem pvpBattle(pvpPlayer1, pvpPlayer2);
    pvpBattle.startBattle(); 

    // Режим PVE
    ZombiPolice pvePlayer;
    ZombiStudent pveEnemy;
    BattleSystem pveBattle(pvePlayer, pveEnemy);
    pveBattle.startBattle(); 

    return 0;
}