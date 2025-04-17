#include <gtest/gtest.h>
#include <sstream>
#include "Entity.h"
#include "ZombiPeople/ZombiPolice.h"
#include "ZombiPeople/ZombiStudent.h"
#include "Elite/Banker.h"
#include "DefPeople/Bodybuilder.h"
#include "core/BattleSystem.h"
#include "core/CardSystem.h"
#include "core/CoinSystem.h"
#include "core/Player.h"
#include "Enemy/EnemyFactory.h"

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

// Тест CardSystem
TEST(CardTest, CardCreation) {
    ZombiPolice policeEntity;
    Card policeCard(policeEntity);
    
    ASSERT_EQ(policeCard.getName(), "Zombi Police");
    ASSERT_EQ(policeCard.getAttack(), policeEntity.getAttack());
    ASSERT_EQ(policeCard.getHealth(), policeEntity.getHealth());
}
// Тест CoinSystem
TEST(CoinSystemTest, AddCoins) {
    CoinSystem coins;
    
    coins.addCoins(50);
    ASSERT_EQ(coins.getBalance(), 50);
    
    EXPECT_THROW(coins.addCoins(-10), std::invalid_argument);
}

TEST(CoinSystemTest, SpendCoins) {
    CoinSystem coins;
    coins.addCoins(100);
    
    ASSERT_TRUE(coins.spendCoins(30));
    ASSERT_EQ(coins.getBalance(), 70);
    
    ASSERT_FALSE(coins.spendCoins(80));
    EXPECT_THROW(coins.spendCoins(-5), std::invalid_argument);
}

TEST(CoinSystemTest, Reset) {
    CoinSystem coins;
    coins.addCoins(75);
    
    coins.reset();
    ASSERT_EQ(coins.getBalance(), 0);
}

// Тест способности Bodybuilder
TEST(BodybuilderTest, SuperStrengthAbility) {
    Bodybuilder bodybuilder;
    ZombiStudent target;
    
    int initialHealth = target.getHealth();
    int initialAttack = bodybuilder.getAttack();
    
    bodybuilder.useUniqueAbility(&target);
    
    ASSERT_EQ(bodybuilder.getAttack(), initialAttack * 2);
    ASSERT_EQ(target.getHealth(), initialHealth); 
}

TEST(BodybuilderTest, InitialStats) {
    Bodybuilder bb;
    
    ASSERT_EQ(bb.getName(), "Bodybuilder");
    ASSERT_EQ(bb.getHealth(), 150);
    ASSERT_EQ(bb.getAttack(), 15);
    ASSERT_EQ(bb.getAbilityName(), "Суперсила");
    ASSERT_EQ(bb.getPrice(), 210);
}

// Тест врагов разных уровней сложности
TEST(EnemyTest, WeakEnemyStats) {
    WeakZombiStudent enemy;
    ASSERT_EQ(enemy.getHealth(), 50);
    ASSERT_EQ(enemy.getAttack(), 3);
    ASSERT_EQ(enemy.getAbilityName(), "Шпаргалка");
}

TEST(EnemyTest, StrongEnemyAbility) {
    EliteZombiProfessor enemy;
    testing::internal::CaptureStdout();
    enemy.useUniqueAbility(nullptr);
    std::string output = testing::internal::GetCapturedStdout();
    
    ASSERT_TRUE(output.find("Экзаменом") != std::string::npos);
}

TEST(EnemyFactoryTest, EasyEnemyCount) {
    auto enemies = EnemyFactory::createEasyEnemies();
    ASSERT_EQ(enemies.size(), 3);
    for (auto enemy : enemies) {
        ASSERT_NE(dynamic_cast<WeakZombiStudent*>(enemy), nullptr);
        delete enemy;
    }
}

TEST(EnemyFactoryTest, HardEnemyMix) {
    auto enemies = EnemyFactory::createHardEnemies();
    int professors = 0;
    
    for (auto enemy : enemies) {
        if (dynamic_cast<EliteZombiProfessor*>(enemy)) {
            professors++;
        }
        delete enemy;
    }
    
    ASSERT_EQ(professors, 2);
}