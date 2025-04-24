/**
 * @file Player.h
 * @brief Заголовочный файл класса Player (игровой персонаж).
 */

 #ifndef PLAYER_H  
 #define PLAYER_H  
 
 #include "Entity.h"
 #include "CoinSystem.h"  
 
 /**
  * @class Player
  * @brief Класс игрока, наследуемый от Entity.
  * @details Управляет монетами и состоянием способностей игрока.
  */
 class Player : public Entity {  
 private:  
     int coins = 0;              ///< Текущее количество монет.
     bool abilityUsed = false;   ///< Флаг использования способности за ход.
 
 public:  
     /**
      * @brief Конструктор игрока.
      * @param name Имя игрока.
      * @param health Здоровье.
      * @param attack Сила атаки.
      * @param ability Название способности.
      * @param price Стоимость карты.
      */
     Player(const std::string& name, int health, int attack, const std::string& ability, int price);  
 
     /**
      * @brief Добавляет монеты.
      * @param amount Количество монет.
      */
     void addCoins(int amount);  
 
     /**
      * @brief Пытается потратить монеты.
      * @param amount Количество монет.
      * @return true, если монет хватило, иначе false.
      */
     bool spendCoins(int amount);  
 
     /**
      * @brief Проверяет, можно ли использовать способность.
      * @return true, если способность еще не использована в этом ходу.
      */
     bool canUseAbility() const;  
 
     /**
      * @brief Помечает способность как использованную.
      */
     void markAbilityUsed();  
 
     /**
      * @brief Активирует уникальную способность игрока.
      */
     void useUniqueAbility();
 };  
 
 #endif