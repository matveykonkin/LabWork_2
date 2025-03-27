#include <gtest/gtest.h>
#include "Entity.h"
#include "ZombiPolice.h"
#include "ZombiStudent.h"
#include "BattleSystem.h"

// Тест способности ZombiPolice
TEST(ZombiPoliceTest, ArrestAbility) {
    ZombiPolice police;
    ZombiStudent student;
    
    police.useUniqueAbility(&student);
    ASSERT_TRUE(student.shouldSkipTurn());
}

// Тест BattleSystem
TEST(BattleSystemTest, PvPBattle) {
    ZombiPolice player1;
    ZombiStudent player2;
    BattleSystem battle(player1, player2);
    
    battle.startBattle();
    ASSERT_TRUE(battle.isBattleOver());
}