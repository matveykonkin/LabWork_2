/**
 * @file Player.cpp
 * @brief Реализация класса Player.
 */

 #include "core/Player.h"
 #include <iostream>
 
 /**
  * @brief Конструктор игрока.
  * @param name Имя игрока.
  * @param health Здоровье.
  * @param attack Сила атаки.
  * @param ability Название способности.
  * @param price Стоимость карты.
  */
 Player::Player(const std::string& name, int health, int attack, const std::string& ability, int price)  
     : Entity(name, health, attack, ability, price) {}  
 
 /**
  * @brief Добавляет монеты к балансу игрока.
  * @param amount Количество добавляемых монет.
  */
 void Player::addCoins(int amount) { 
     coins += amount; 
 }  
 
 /**
  * @brief Пытается потратить монеты.
  * @param amount Количество монет для траты.
  * @return true, если монет достаточно, иначе false.
  */
 bool Player::spendCoins(int amount) {  
     if (coins >= amount) {  
         coins -= amount;  
         return true;  
     }  
     return false;  
 }  
 
 /**
  * @brief Проверяет, можно ли использовать способность.
  * @return true, если способность еще не использована в этом ходу.
  */
 bool Player::canUseAbility() const { 
     return !abilityUsed; 
 }  
 
 /**
  * @brief Помечает способность как использованную.
  */
 void Player::markAbilityUsed() { 
     abilityUsed = true; 
 }  
 
 /**
  * @brief Активирует уникальную способность игрока.
  * @details Выводит сообщение о применении способности и помечает ее как использованную.
  */
 void Player::useUniqueAbility() {
     if (canUseAbility()) {
         std::cout << name << " использует способность: " << uniqueAbility << std::endl;
         markAbilityUsed();
     }
 }