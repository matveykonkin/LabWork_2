/**
 * @file Card.h
 * @brief Заголовочный файл класса Card (игровая карта).
 */

 #ifndef CARD_H  
 #define CARD_H  
 
 #include "Entity.h"  
 #include <string>  
 
 /**
  * @class Card
  * @brief Представляет игровую карту, связанную с Entity.
  */
 class Card {  
 private:  
     Entity& entity; ///< Связанная сущность.
 
 public:  
     /**
      * @brief Конструктор карты.
      * @param entity Ссылка на сущность.
      */
     Card(Entity& entity);  
 
     /**
      * @brief Отрисовывает карту.
      */
     void render() const; 
 
     /**
      * @brief Возвращает имя сущности.
      */
     const std::string& getName() const;  
 
     /**
      * @brief Возвращает здоровье сущности.
      */
     int getHealth() const;  
 
     /**
      * @brief Возвращает силу атаки сущности.
      */
     int getAttack() const;  
 
     /**
      * @brief Возвращает название способности.
      */
     const std::string& getAbilityName() const;  
 
     /**
      * @brief Возвращает стоимость карты.
      */
     int getPrice() const;
 };  
 
 #endif