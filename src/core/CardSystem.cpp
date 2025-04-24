/**
 * @file CardSystem.cpp
 * @brief Реализация системы карт.
 */

 #include "core/CardSystem.h"  
 #include <iostream>  
 
 /**
  * @brief Конструктор карты.
  * @param entity Связанная сущность.
  */
 Card::Card(Entity& entity) : entity(entity) {}  
 
 /**
  * @brief Отрисовывает карту в консоли.
  * @details Выводит имя, здоровье, атаку, способность и цену карты.
  */
 void Card::render() const {  
     std::cout << "Карта: " << entity.getName() << "\n"  
               << "Здоровье: " << entity.getHealth() << "\n"  
               << "Атака: " << entity.getAttack() << "\n"  
               << "Способность: " << entity.getAbilityName() << "\n"
               << "Цена: " << entity.getPrice() << "\n\n";  
 }  
 
 /**
  * @brief Возвращает имя связанной сущности.
  */
 const std::string& Card::getName() const { 
     return entity.getName(); 
 }  
 
 /**
  * @brief Возвращает здоровье связанной сущности.
  */
 int Card::getHealth() const { 
     return entity.getHealth(); 
 }  
 
 /**
  * @brief Возвращает атаку связанной сущности.
  */
 int Card::getAttack() const { 
     return entity.getAttack(); 
 }  
 
 /**
  * @brief Возвращает название способности связанной сущности.
  */
 const std::string& Card::getAbilityName() const { 
     return entity.getAbilityName();
 }  
 
 /**
  * @brief Возвращает цену карты.
  */
 int Card::getPrice() const { 
     return entity.getPrice();
 }