/**
 * @file ZombiPolice.h
 * @brief Заголовочный файл класса ZombiPolice (полицейский-зомби).
 */

 #ifndef ZOMBIPOLICE_H  
 #define ZOMBIPOLICE_H
 
 #include "Entity.h"
 
 /**
  * @class ZombiPolice
  * @brief Класс, реализующий зомби-полицейского.
  * @details Наследуется от Entity и реализует "полицейские" методы атаки.
  */
 class ZombiPolice : public Entity {
 public:
     /**
      * @brief Конструктор по умолчанию.
      */
     ZombiPolice();
 
     /**
      * @brief Использует уникальную способность зомби-полицейского.
      * @param target Цель для атаки.
      * @details Например, может "арестовать" цель, обездвиживая её.
      */
     void useUniqueAbility(Entity* target) override;
 };
 
 #endif