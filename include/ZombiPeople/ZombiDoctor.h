/**
 * @file ZombiDoctor.h
 * @brief Заголовочный файл класса ZombiDoctor (доктор-зомби).
 */

 #ifndef ZOMBI_DOCTOR_H
 #define ZOMBI_DOCTOR_H
 
 #include "Entity.h"
 
 /**
  * @class ZombiDoctor
  * @brief Класс, реализующий зомби-доктора.
  * @details Наследуется от Entity и реализует "медицинские" атаки.
  */
 class ZombiDoctor : public Entity {
 public:
     /**
      * @brief Конструктор по умолчанию.
      */
     ZombiDoctor();
 
     /**
      * @brief Использует уникальную способность зомби-доктора.
      * @param target Цель для атаки.
      * @details Например, может "лечить" других зомби или заражать цели.
      */
     void useUniqueAbility(Entity* target) override;
 };
 
 #endif