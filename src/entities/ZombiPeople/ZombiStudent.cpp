/**
 * @file ZombiStudent.cpp
 * @brief Реализация класса ZombiStudent (зомби-студент).
 */

 #include "ZombiPeople/ZombiStudent.h"
 #include <iostream>
 
 /**
  * @brief Конструктор ZombiStudent.
  * @details Инициализирует зомби-студента с параметрами:
  * - Имя: "Zombi Student"
  * - Здоровье: 80
  * - Атака: 15
  * - Уникальная способность: "Шпаргалка"
  * - Макс. здоровье: 135
  */
 ZombiStudent::ZombiStudent() :
     Entity("Zombi Student", 80, 15, "Шпаргалка", 135) {}
 
 /**
  * @brief Активирует способность "Шпаргалка".
  * @param target Не используется (но требуется по интерфейсу).
  * @details Увеличивает атаку на 10.
  *          Выводит сообщение в консоль о применении способности.
  */
 void ZombiStudent::useUniqueAbility(Entity* target) {
     std::cout << name << " использует способность: " << uniqueAbility 
               << " (увеличивает шанс на успешную атаку)" << std::endl;
     attack += 10;  
 }