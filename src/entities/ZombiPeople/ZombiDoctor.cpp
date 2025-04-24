/**
 * @file ZombiDoctor.cpp
 * @brief Реализация класса ZombiDoctor (зомби-доктор).
 */

 #include "ZombiDoctor.h"
 #include <iostream>
 
 /**
  * @brief Конструктор ZombiDoctor.
  * @details Инициализирует зомби-доктора с параметрами:
  * - Имя: "Zombi Doctor"
  * - Здоровье: 90
  * - Атака: 10
  * - Уникальная способность: "Лечение"
  * - Макс. здоровье: 125
  */
 ZombiDoctor::ZombiDoctor() : 
     Entity("Zombi Doctor", 90, 10, "Лечение", 125) {}
 
 /**
  * @brief Активирует способность "Лечение".
  * @param target Не используется (но требуется по интерфейсу).
  * @details Восстанавливает 30 здоровья (но не более максимума в 90).
  *          Выводит сообщение в консоль о применении способности.
  */
 void ZombiDoctor::useUniqueAbility(Entity* target) {
     std::cout << name << " использует способность: " << uniqueAbility 
               << " (восстанавливает 30 здоровья)" << std::endl;
     health += 30;
     if (health > 90) health = 90;  
 }