/**
 * @file Game.h
 * @brief Заголовочный файл для основного класса игры
 */

#pragma once

#include "CardSystem.h"
#include "BattleSystem.h"
#include <memory>

/**
 * @class Game
 * @brief Основной класс игры
 * 
 * Класс Game управляет игровым процессом, включая создание карт,
 * проведение боев и управление игровым состоянием.
 */
class Game {
private:
    CardSystem cardSystem;  ///< Система карт
    std::unique_ptr<BattleSystem> battleSystem;  ///< Система боя

public:
    /**
     * @brief Конструктор игры
     */
    Game();

    /**
     * @brief Начать новую игру
     */
    void start();

    /**
     * @brief Выбрать персонажа
     * @return Указатель на выбранного персонажа
     */
    std::unique_ptr<Entity> selectCharacter();

    /**
     * @brief Выбрать противника
     * @return Указатель на выбранного противника
     */
    std::unique_ptr<Entity> selectOpponent();

    /**
     * @brief Начать бой
     * @param player1 Первый участник
     * @param player2 Второй участник
     */
    void startBattle(Entity& player1, Entity& player2);
}; 