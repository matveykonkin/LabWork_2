#include "ZombiPolice.h" 
#include "ZombiStudent.h" 
#include "CardSystem.h"  
#include "BattleSystem.h"

int main() {  
    ZombiPolice zombiPolice;  
    Card ZombiPoliceCard(zombiPolice);  
    ZombiPoliceCard.render(); 

    ZombiStudent zombiStudent;
    Card ZombiStudentCard(zombiStudent);
    ZombiStudentCard.render();

    ZombiPolice player1;
    ZombiStudent player2;  

    BattleSystem battle(player1, player2);
    battle.startBattle(false);  // false = режим PvP

    ZombiPolice player;
    ZombiStudent enemy;  

    BattleSystem battle(player, enemy);
    battle.startBattle(true);  // true = режим PvE

    return 0;  
}  

