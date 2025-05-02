/**
 * @file BattleSystem.h
 * @brief Заголовочный файл для системы боя
 */

#pragma once

#include "Entity.h"
#include "Player.h"  
#include "AI.h"      
#include <iostream>

/**
 * @class BattleSystem
 * @brief Класс, управляющий логикой боя между сущностями
 * 
 * Класс BattleSystem отвечает за управление ходом боя между двумя сущностями,
 * обработку действий игрока и автоматических действий противника.
 */
class BattleSystem {
private:
    Entity& player1;  ///< Первый участник боя
    Entity& player2;  ///< Второй участник боя
    bool isPvPMode;   ///< Флаг режима "игрок против игрока"

    /**
     * @brief Обрабатывает ход игрока
     * @param player Атакующий игрок
     * @param enemy Цель атаки
     */
    void playerTurn(Player& player, Entity& enemy);

    /**
     * @brief Обрабатывает ход ИИ
     * @param ai Атакующий ИИ
     * @param enemy Цель атаки
     */
    void aiTurn(AI& ai, Entity& enemy);

    /**
     * @brief Обрабатывает ход обычной сущности
     * @param attacker Атакующая сущность
     * @param defender Защищающаяся сущность
     */
    void entityTurn(Entity& attacker, Entity& defender);

    /**
     * @brief Проверяет окончание боя
     * @return true, если один из участников мертв
     */
    bool isBattleOver() const;

    /**
     * @brief Объявляет победителя боя
     */
    void announceWinner();

public:
    /**
     * @brief Конструктор системы боя
     * @param p1 Первый участник
     * @param p2 Второй участник
     * @param isPvP Режим PvP (по умолчанию false)
     */
    BattleSystem(Entity& p1, Entity& p2, bool isPvP = false);
    
    /**
     * @brief Начинает бой
     * 
     * Управляет ходом боя, поочередно вызывая ходы участников
     * до окончания боя.
     */
    void startBattle();

    /**
     * @brief Выводит текущий статус боя
     */
    void displayBattleStatus() const;

    /**
     * @brief Накладывает дебафф на всех врагов
     * @param multiplier Множитель силы (например, 0.8 для -20%)
     */
    void debuffAllEnemies(float multiplier);

    /**
     * @brief Дает дополнительный ход.
     * @param entity Целевая сущность.
     */
};