/**
 * @file CoinSystem.h
 * @brief Система управления игровой валютой.
 */

 #ifndef COINSYSTEM_H
 #define COINSYSTEM_H
 
 #include <stdexcept>
 
 /**
  * @class CoinSystem
  * @brief Управляет балансом монет игрока.
  */
 class CoinSystem {
 private:
     int coins = 0;  ///< Текущий баланс.
 
 public:
     /**
      * @brief Добавляет монеты.
      * @param amount Количество монет.
      */
     void addCoins(int amount);
 
     /**
      * @brief Пытается потратить монеты.
      * @param amount Количество монет.
      * @return true, если списание успешно.
      * @throws std::runtime_error При недостатке средств.
      */
     bool spendCoins(int amount);
 
     /**
      * @brief Возвращает текущий баланс.
      * @return Количество монет.
      */
     int getBalance() const;
 
     /**
      * @brief Сбрасывает баланс в 0.
      */
     void reset();
 
     /**
      * @brief Устанавливает множитель дохода.
      * @param multiplier Множитель (например, 1.5 для +50%).
      */
     void setIncomeMultiplier(float multiplier);
 };
 
 #endif