/**
 * @file ZombiStudent.h
 * @brief Заголовочный файл класса ZombiStudent (студент-зомби).
 */

 #ifndef ZOMBI_STUDENT_H
 #define ZOMBI_STUDENT_H
 
 #include "Entity.h"
 
 /**
  * @class ZombiStudent
  * @brief Класс, реализующий зомби-студента.
  * @details Наследуется от Entity и реализует способность, характерную для студентов.
  */
 class ZombiStudent : public Entity {
 public:
     /**
      * @brief Конструктор по умолчанию.
      */
     ZombiStudent();
 
     /**
      * @brief Использует уникальную способность зомби-студента.
      * @param target Цель для атаки.
      * @details Например, может "списывать", копируя способности цели.
      */
     void useUniqueAbility(Entity* target) override;
 };
 
 #endif