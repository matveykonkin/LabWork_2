/**
 * @file ZombiTeacher.cpp
 * @brief Реализация класса ZombiTeacher (зомби-учитель).
 */

 #include "ZombiTeacher.h"
 #include <iostream>
 
 /**
  * @brief Конструктор ZombiTeacher.
  * @details Инициализирует зомби-учителя с параметрами:
  * - Имя: "Zombi Teacher"
  * - Здоровье: 85
  * - Атака: 12
  * - Уникальная способность: "Мотивация"
  * - Макс. здоровье: 140
  */
 ZombiTeacher::ZombiTeacher() : 
     Entity("Zombi Teacher", 85, 12, "Мотивация", 140) {}
 
 /**
  * @brief Активирует способность "Мотивация".
  * @param target Не используется (но требуется по интерфейсу).
  * @details Увеличивает атаку на 5 и здоровье на 20.
  *          Выводит сообщение в консоль о применении способности.
  */
 void ZombiTeacher::useUniqueAbility(Entity* target) {
     std::cout << name << " использует способность: " << uniqueAbility 
               << " (увеличивает атаку и защиту)" << std::endl;
     attack += 5;
     health += 20;
 }