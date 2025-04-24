/**
 * @file AI.h
 * @brief Заголовочный файл класса ИИ.
 */

 #ifndef AI_H  
 #define AI_H  
 
 #include "Entity.h"
 
 /**
  * @class AI
  * @brief ИИ-соперник, наследуемый от Entity.
  */
 class AI : public Entity {  
 private:
     bool abilityUsed = false;  ///< Флаг использования способности.
 
 public:  
     /**
      * @brief Конструктор ИИ.
      * @param name Имя.
      * @param health Здоровье.
      * @param attack Атака.
      * @param ability Способность.
      * @param price Стоимость.
      */
     AI(const std::string& name, int health, int attack, const std::string& ability, int price);  
 
     /**
      * @brief Совершает ход.
      * @param target Цель.
      */
     void makeMove(Entity& target);  
 
     /**
      * @brief Проверяет, использована ли способность.
      * @return true, если использована.
      */
     bool getAbilityUsed() const;
 };  
 
 #endif