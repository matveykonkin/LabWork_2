#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <ctime>

// Подключаем все необходимые классы
#include "src/entities/DefPeople/Bodybuilder.h"
#include "src/entities/DefPeople/Child.h"
#include "src/entities/DefPeople/Scientist.h"
#include "src/entities/DefPeople/Military.h"
#include "src/entities/ZombiPeople/ZombiTeacher.h"
#include "src/entities/ZombiPeople/ZombiDoctor.h"
#include "src/entities/ZombiPeople/ZombiPolice.h"
#include "src/entities/ZombiPeople/ZombiStudent.h"
#include "src/entities/TechnologicalEntities/CyberZombi.h"
#include "src/entities/TechnologicalEntities/Drone.h"
#include "src/entities/TechnologicalEntities/Robot.h"
#include "src/entities/ZombiAnimals/ZombiWolf.h"
#include "src/entities/ZombiAnimals/ZombiPigeon.h"
#include "src/entities/ZombiAnimals/ZombiBear.h"
#include "src/entities/ZombiAnimals/ZombiDog.h"
#include "src/entities/Elite/SmallBusinessman.h"
#include "src/entities/Elite/HugeBusinessman.h"
#include "src/entities/Elite/Official.h"
#include "src/entities/Elite/Banker.h"
#include "src/core/BattleSystem.h"
#include "src/core/Player.h"
#include "src/core/AI.h"

// Функция для выбора персонажа игроком
std::unique_ptr<Entity> selectPlayerCharacter() {
    std::cout << "Выберите своего персонажа:\n";
    std::cout << "1. Bodybuilder\n";
    std::cout << "2. Child\n";
    std::cout << "3. Scientist\n";
    std::cout << "4. Military\n";
    std::cout << "5. ZombiTeacher\n";
    std::cout << "6. ZombiDoctor\n";
    std::cout << "7. ZombiPolice\n";
    std::cout << "8. ZombiStudent\n";
    std::cout << "9. CyberZombi\n";
    std::cout << "10. Drone\n";
    std::cout << "11. Robot\n";
    std::cout << "12. ZombiWolf\n";
    std::cout << "13. ZombiPigeon\n";
    std::cout << "14. ZombiBear\n";
    std::cout << "15. ZombiDog\n";
    std::cout << "16. SmallBusinessman\n";
    std::cout << "17. HugeBusinessman\n";
    std::cout << "18. Official\n";
    std::cout << "19. Banker\n";

    int choice;
    while (true) {
        std::cout << "Ваш выбор (1-19): ";
        std::cin >> choice;
        if (std::cin.fail() || choice < 1 || choice > 19) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неверный выбор! Введите число от 1 до 19: ";
            continue;
        }
        break;
    }

    switch (choice) {
        case 1: return std::make_unique<Bodybuilder>();
        case 2: return std::make_unique<Child>();
        case 3: return std::make_unique<Scientist>();
        case 4: return std::make_unique<Military>();
        case 5: return std::make_unique<ZombiTeacher>();
        case 6: return std::make_unique<ZombiDoctor>();
        case 7: return std::make_unique<ZombiPolice>();
        case 8: return std::make_unique<ZombiStudent>();
        case 9: return std::make_unique<CyberZombi>();
        case 10: return std::make_unique<Drone>();
        case 11: return std::make_unique<Robot>();
        case 12: return std::make_unique<ZombiWolf>();
        case 13: return std::make_unique<ZombiPigeon>();
        case 14: return std::make_unique<ZombiBear>();
        case 15: return std::make_unique<ZombiDog>();
        case 16: return std::make_unique<SmallBusinessman>();
        case 17: return std::make_unique<HugeBusinessman>();
        case 18: return std::make_unique<Official>();
        case 19: return std::make_unique<Banker>();
        default: return std::make_unique<Bodybuilder>(); // fallback
    }
}

// Функция для случайного выбора персонажа ИИ
std::unique_ptr<Entity> selectAICharacter() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 19);
    int choice = dis(gen);

    switch (choice) {
        case 1: return std::make_unique<Bodybuilder>();
        case 2: return std::make_unique<Child>();
        case 3: return std::make_unique<Scientist>();
        case 4: return std::make_unique<Military>();
        case 5: return std::make_unique<ZombiTeacher>();
        case 6: return std::make_unique<ZombiDoctor>();
        case 7: return std::make_unique<ZombiPolice>();
        case 8: return std::make_unique<ZombiStudent>();
        case 9: return std::make_unique<CyberZombi>();
        case 10: return std::make_unique<Drone>();
        case 11: return std::make_unique<Robot>();
        case 12: return std::make_unique<ZombiWolf>();
        case 13: return std::make_unique<ZombiPigeon>();
        case 14: return std::make_unique<ZombiBear>();
        case 15: return std::make_unique<ZombiDog>();
        case 16: return std::make_unique<SmallBusinessman>();
        case 17: return std::make_unique<HugeBusinessman>();
        case 18: return std::make_unique<Official>();
        case 19: return std::make_unique<Banker>();
        default: return std::make_unique<Bodybuilder>(); // fallback
    }
}

int main() {
    std::srand(std::time(nullptr)); // Инициализация генератора случайных чисел

    std::cout << "=== ДОБРО ПОЖАЛОВАТЬ В ИГРУ ===" << std::endl;
    
    // Выбор персонажей
    auto player = selectPlayerCharacter();
    auto ai = selectAICharacter();

    // Создание системы боя
    BattleSystem battle(*player, *ai, false);
    
    // Начало боя
    battle.startBattle();

    return 0;
} 