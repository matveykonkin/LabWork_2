#include <gtest/gtest.h>
#include "Entity.h"
#include "/home/matvey/Документы/SimpleList/matveyKonkin83/LabWork_2/include/ZombiPeople/ZombiPolice.h"
#include "/home/matvey/Документы/SimpleList/matveyKonkin83/LabWork_2/include/ZombiPeople/ZombiStudent.h"

// Тест способности ZombiPolice
TEST(ZombiPoliceTest, ArrestAbility) {
    ZombiPolice police;
    ZombiStudent student;
    
    police.useUniqueAbility(&student);
    ASSERT_TRUE(student.shouldSkipTurn());
}

