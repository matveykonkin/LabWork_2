/**
 * @file CardSystem.cpp
 * @brief Реализация системы карт.
 */

#include "core/CardSystem.h"
#include "core/Player.h"
#include "core/AI.h"
#include "ZombiAnimals/ZombiBear.h"
#include "ZombiAnimals/ZombiDog.h"
#include "ZombiAnimals/ZombiPigeon.h"
#include "ZombiAnimals/ZombiWolf.h"
#include "Elite/Banker.h"
#include "Elite/HugeBusinessman.h"
#include "Elite/Official.h"
#include "Elite/SmallBusinessman.h"
#include <stdexcept>

CardSystem::CardSystem() {
    cards.push_back(std::make_unique<Player>("Bodybuilder", 100, 15, "Сила", 100));
    cards.push_back(std::make_unique<Player>("Child", 60, 8, "План", 50));
    cards.push_back(std::make_unique<Player>("Scientist", 70, 10, "Исследование", 70));
    cards.push_back(std::make_unique<Player>("Military", 90, 12, "Тактика", 80));
    cards.push_back(std::make_unique<AI>("ZombiTeacher", 80, 10, "Обучение", 60));
    cards.push_back(std::make_unique<AI>("ZombiDoctor", 70, 12, "Лечение", 70));
    cards.push_back(std::make_unique<AI>("ZombiPolice", 85, 11, "Арест", 75));
    cards.push_back(std::make_unique<AI>("ZombiStudent", 65, 9, "Учеба", 55));
    cards.push_back(std::make_unique<AI>("CyberZombi", 95, 14, "Кибер-атака", 90));
    cards.push_back(std::make_unique<AI>("Drone", 50, 8, "Разведка", 40));
    cards.push_back(std::make_unique<AI>("Robot", 110, 13, "Ремонт", 100));
    cards.push_back(std::make_unique<AI>("ZombiWolf", 75, 12, "Охота", 65));
    cards.push_back(std::make_unique<AI>("ZombiPigeon", 40, 7, "Полёт", 30));
    cards.push_back(std::make_unique<AI>("ZombiBear", 120, 16, "Рык", 110));
    cards.push_back(std::make_unique<AI>("ZombiDog", 55, 9, "Верность", 45));
    cards.push_back(std::make_unique<AI>("SmallBusinessman", 65, 8, "Торговля", 60));
    cards.push_back(std::make_unique<AI>("HugeBusinessman", 90, 10, "Инвестиции", 85));
    cards.push_back(std::make_unique<AI>("Official", 75, 9, "Коррупция", 70));
    cards.push_back(std::make_unique<AI>("Banker", 80, 8, "Кредит", 75));
}

std::unique_ptr<Entity> CardSystem::createCard(const std::string& type) {
    for (const auto& card : cards) {
        if (card->getName() == type) {
            if (auto* player = dynamic_cast<Player*>(card.get())) {
                return std::make_unique<Player>(*player);
            } else if (auto* ai = dynamic_cast<AI*>(card.get())) {
                return std::make_unique<AI>(*ai);
            }
        }
    }
    throw std::invalid_argument("Неизвестный тип карты: " + type);
}

const std::vector<std::unique_ptr<Entity>>& CardSystem::getCards() const {
    return cards;
}

Entity* CardSystem::getCard(int index) const {
    if (index < 0 || index >= static_cast<int>(cards.size())) {
        throw std::out_of_range("Неверный индекс карты");
    }
    return cards[index].get();
}

size_t CardSystem::getCardCount() const {
    return cards.size();
}

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