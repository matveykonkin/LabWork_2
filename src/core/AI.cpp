/**
 * @file AI.cpp
 * @brief Реализация ИИ-соперника.
 */

 #include "core/AI.h"  
 #include "Entity.h"
 #include <cstdlib>  
 
 /**
  * @brief Конструктор ИИ.
  * @param name Имя.
  * @param health Здоровье.
  * @param attack Атака.
  * @param ability Способность.
  * @param price Стоимость.
  */
 AI::AI(const std::string& name, int health, int attack, const std::string& ability, int price)  
     : Entity(name, health, attack, ability, price) {}  
 
 /**
  * @brief Совершает ход ИИ.
  * @param target Цель атаки.
  * @details С 50% вероятностью использует способность (если еще не использована) или атакует.
  */
 void AI::makeMove(Entity& target) {  
     if (rand() % 2 == 0 && !abilityUsed) {     
         abilityUsed = true;  
     } else {  
         target.takeDamage(getAttack());  
     }  
 }  
 
 /**
  * @brief Проверяет, использована ли способность.
  * @return true, если способность использована в этом ходу.
  */
 bool AI::getAbilityUsed() const {
     return abilityUsed;  
 }