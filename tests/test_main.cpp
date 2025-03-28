#include <gtest/gtest.h>
#include "Entity.h"
#include "ZombiPeople/ZombiPolice.h"
#include "ZombiPeople/ZombiStudent.h"

// Тест способности ZombiPolice
TEST(ZombiPoliceTest, ArrestAbility) {
    ZombiPolice police;
    ZombiStudent student;
    
    police.useUniqueAbility(&student);
    ASSERT_TRUE(student.shouldSkipTurn());
}

