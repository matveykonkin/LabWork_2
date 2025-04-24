/**
 * @file CoinSystem.cpp
 * @brief Реализация системы управления монетами.
 */

 #include "core/CoinSystem.h"

 /**
  * @brief Добавляет монеты к балансу.
  * @param amount Количество добавляемых монет.
  * @throws std::invalid_argument Если amount отрицательный.
  */
 void CoinSystem::addCoins(int amount) {
     if (amount < 0) {
         throw std::invalid_argument("Количество монет не может быть отрицательным");
     }
     coins += amount;
 }
 
 /**
  * @brief Пытается потратить монеты.
  * @param amount Количество монет для траты.
  * @return true, если монет достаточно, иначе false.
  * @throws std::invalid_argument Если amount отрицательный.
  */
 bool CoinSystem::spendCoins(int amount) {
     if (amount < 0) {
         throw std::invalid_argument("Количество монет не может быть отрицательным");
     }
     if (coins >= amount) {
         coins -= amount;
         return true;
     }
     return false;
 }
 
 /**
  * @brief Возвращает текущий баланс монет.
  * @return Текущее количество монет.
  */
 int CoinSystem::getBalance() const {
     return coins;
 }
 
 /**
  * @brief Сбрасывает баланс монет в ноль.
  */
 void CoinSystem::reset() {
     coins = 0;
 }