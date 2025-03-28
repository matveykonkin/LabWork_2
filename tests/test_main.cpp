#include <gtest/gtest.h>
#include <sstream>
#include "Entity.h"
#include "ZombiPeople/ZombiPolice.h"
#include "ZombiPeople/ZombiStudent.h"
#include "core/BattleSystem.h"

// Тест способности ZombiPolice
TEST(ZombiPoliceTest, ArrestAbility) {
    ZombiPolice police;
    ZombiStudent student;
    
    police.useUniqueAbility(&student);
    ASSERT_TRUE(student.shouldSkipTurn());
}

// Тест BattleSystem
TEST(BattleSystemTest, DamageTest) {
    ZombiStudent student;
    student.takeDamage(student.getMaxHealth());
    ASSERT_FALSE(student.isAlive());
}