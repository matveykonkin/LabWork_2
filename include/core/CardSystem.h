/**
 * @file CardSystem.h
 * @brief Заголовочный файл для системы карт
 */

#pragma once

#include <vector>
#include <memory>
#include "Entity.h"

/**
 * @class Card
 * @brief Класс, представляющий карту сущности
 * 
 * Класс Card оборачивает сущность и предоставляет методы
 * для отображения и получения информации о карте.
 */
class Card {
private:
    Entity& entity;  ///< Ссылка на сущность

public:
    /**
     * @brief Конструктор карты
     * @param entity Сущность для создания карты
     */
    Card(Entity& entity);

    /**
     * @brief Отобразить информацию о карте
     */
    void render() const;

    /**
     * @brief Получить имя сущности
     * @return Имя сущности
     */
    const std::string& getName() const;

    /**
     * @brief Получить здоровье сущности
     * @return Здоровье сущности
     */
    int getHealth() const;

    /**
     * @brief Получить атаку сущности
     * @return Атака сущности
     */
    int getAttack() const;

    /**
     * @brief Получить название способности
     * @return Название способности
     */
    const std::string& getAbilityName() const;

    /**
     * @brief Получить стоимость карты
     * @return Стоимость карты
     */
    int getPrice() const;
};

/**
 * @class CardSystem
 * @brief Класс, управляющий системой карт в игре
 * 
 * Класс CardSystem отвечает за создание, хранение и управление
 * картами сущностей в игре.
 */
class CardSystem {
private:
    std::vector<std::unique_ptr<Entity>> cards;  ///< Вектор карт сущностей

public:
    /**
     * @brief Конструктор системы карт
     */
    CardSystem();

    /**
     * @brief Создать карту сущности
     * @param type Тип сущности
     * @return Указатель на созданную сущность
     */
    std::unique_ptr<Entity> createCard(const std::string& type);

    /**
     * @brief Получить все доступные карты
     * @return Вектор указателей на карты
     */
    const std::vector<std::unique_ptr<Entity>>& getCards() const;

    /**
     * @brief Получить карту по индексу
     * @param index Индекс карты
     * @return Указатель на карту
     */
    Entity* getCard(int index) const;

    /**
     * @brief Получить количество карт
     * @return Количество карт
     */
    size_t getCardCount() const;
};