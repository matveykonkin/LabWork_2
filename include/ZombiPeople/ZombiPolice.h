/**
 * @file ZombiPolice.h
 * @brief Заголовочный файл класса ZombiPolice (полицейский-зомби).
 */

#ifndef ZOMBIPOLICE_H  
#define ZOMBIPOLICE_H

#include "Entity.h"

/**
 * @class ZombiPolice
 * @brief Класс, реализующий зомби-полицейского.
 * @details Наследуется от Entity и реализует "полицейские" методы атаки.
 */
class ZombiPolice : public Entity {
public:
    /**
     * @brief Конструктор зомби-полицейского
     * @param name Имя зомби-полицейского
     * @param health Здоровье зомби-полицейского
     * @param attack Сила атаки зомби-полицейского
     * @param ability Уникальная способность зомби-полицейского
     * @param price Цена зомби-полицейского
     */
    ZombiPolice(const std::string& name, int health, int attack, 
                const std::string& ability, int price);

    /**
     * @brief Обрабатывает получение урона.
     * @param damage Количество полученного урона.
     */
    void takeDamage(int damage) override;

    /**
     * @brief Проверяет, жив ли зомби-полицейский.
     * @return true, если здоровье больше 0, иначе false.
     */
    bool isAlive() const override;

    /**
     * @brief Использует уникальную способность зомби-полицейского.
     * @param target Цель для атаки.
     * @details Например, может "арестовать" цель, обездвиживая её.
     */
    void useUniqueAbility(Entity* target) override;
};

#endif