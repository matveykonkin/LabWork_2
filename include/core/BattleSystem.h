/**
 * @file BattleSystem.h
 * @brief Система управления боями.
 */

 #ifndef BATTLESYSTEM_H
 #define BATTLESYSTEM_H
 
 #include "Entity.h"
 #include "Player.h"  
 #include "AI.h"      
 
 /**
  * @class BattleSystem
  * @brief Управляет логикой боя между игроками или ИИ.
  */
 class BattleSystem {
 private:
     Entity& player1;  ///< Первый участник боя.
     Entity& player2;  ///< Второй участник боя.
     bool isPvPMode;   ///< Режим "игрок против игрока".
 
 public:
     /**
      * @brief Конструктор системы боя.
      * @param p1 Первый участник.
      * @param p2 Второй участник.
      * @param isPvP Режим PvP (по умолчанию false).
      */
     BattleSystem(Entity& p1, Entity& p2, bool isPvP = false);
     
     /**
      * @brief Начинает бой.
      */
     void startBattle();
 
     /**
      * @brief Обрабатывает ход игрока.
      * @param player Атакующий игрок.
      * @param enemy Цель.
      */
     void playerTurn(Player& player, Entity& enemy);
 
     /**
      * @brief Обрабатывает ход ИИ.
      * @param ai ИИ-соперник.
      * @param player Цель (игрок).
      */
     void aiTurn(AI& ai, Entity& player);
 
     /**
      * @brief Проверяет окончание боя.
      * @return true, если один из участников побежден.
      */
     bool isBattleOver() const;
 
     /**
      * @brief Выводит текущий статус боя.
      */
     void displayBattleStatus() const;
 
     /**
      * @brief Накладывает дебафф на всех врагов.
      * @param multiplier Множитель силы (например, 0.8 для -20%).
      */
     void debuffAllEnemies(float multiplier);
 
     /**
      * @brief Дает дополнительный ход.
      * @param entity Целевая сущность.
      */
     void grantExtraTurn(Entity* entity);
 };
 
 #endif