/**
 * @file ZombiPolice.cpp
 * @brief Реализация класса ZombiPolice (зомби-полицейский).
 */

 #include "ZombiPeople/ZombiPolice.h"
 #include <iostream>
 
 /**
  * @brief Конструктор ZombiPolice.
  * @details Инициализирует зомби-полицейского с параметрами:
  * - Имя: "Zombi Police"
  * - Здоровье: 100
  * - Атака: 20
  * - Уникальная способность: "Arrest"
  * - Макс. здоровье: 180
  */
 ZombiPolice::ZombiPolice() : 
     Entity("Zombi Police", 100, 20, "Arrest", 180) {}
 
 /**
  * @brief Активирует способность "Arrest".
  * @param target Цель для ареста (должна быть не nullptr).
  * @details Заставляет цель пропустить ход (вызывает setSkipTurn(true)).
  *          Выводит сообщение в консоль о применении способности.
  */
 void ZombiPolice::useUniqueAbility(Entity* target) {
     std::cout << name << " использует способность: " << uniqueAbility 
               << " (противник пропускает ход)" << std::endl;
     if (target) {
         target->setSkipTurn(true);
     }
 }