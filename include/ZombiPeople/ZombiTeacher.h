/**
 * @file ZombiTeacher.h
 * @brief Заголовочный файл класса ZombiTeacher (учитель-зомби).
 */

 #ifndef ZOMBI_TEACHER_H
 #define ZOMBI_TEACHER_H
 
 #include "Entity.h"
 
 /**
  * @class ZombiTeacher
  * @brief Класс, реализующий зомби-учителя.
  * @details Наследуется от Entity и реализует уникальную способность атаки.
  */
 class ZombiTeacher : public Entity {
 public:
     /**
      * @brief Конструктор по умолчанию.
      */
     ZombiTeacher();
 
     /**
      * @brief Использует уникальную способность зомби-учителя.
      * @param target Цель для атаки (указатель на Entity).
      * @details Может, например, "читать лекцию", замедляя цель.
      */
     void useUniqueAbility(Entity* target) override;
 };
 
 #endif