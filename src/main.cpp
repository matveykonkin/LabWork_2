#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <ctime>

#include "DefPeople/Bodybuilder.h"
#include "DefPeople/Child.h"
#include "DefPeople/Scientist.h"
#include "DefPeople/Military.h"
#include "ZombiPeople/ZombiTeacher.h"
#include "ZombiPeople/ZombiDoctor.h"
#include "ZombiPeople/ZombiPolice.h"
#include "ZombiPeople/ZombiStudent.h"
#include "Technological Entities/CyberZombi.h"
#include "Technological Entities/Drone.h"
#include "Technological Entities/Robot.h"
#include "ZombiAnimals/ZombiWolf.h"
#include "ZombiAnimals/ZombiPigeon.h"
#include "ZombiAnimals/ZombiBear.h"
#include "ZombiAnimals/ZombiDog.h"
#include "Elite/SmallBusinessman.h"
#include "Elite/HugeBusinessman.h"
#include "Elite/Official.h"
#include "Elite/Banker.h"
#include "core/BattleSystem.h"
#include "core/Player.h"
#include "core/AI.h"
#include "Entity.h"

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
        case 1: return std::make_unique<Bodybuilder>("Bodybuilder", 100, 20, "Strength", 50);
        case 2: return std::make_unique<Child>("Child", 50, 5, "Play", 20);
        case 3: return std::make_unique<Scientist>("Scientist", 80, 15, "Research", 40);
        case 4: return std::make_unique<Military>("Military", 120, 25, "Combat", 60);
        case 5: return std::make_unique<ZombiTeacher>("ZombiTeacher", 90, 18, "Teach", 45);
        case 6: return std::make_unique<ZombiDoctor>("ZombiDoctor", 85, 16, "Heal", 42);
        case 7: return std::make_unique<ZombiPolice>("ZombiPolice", 95, 19, "Arrest", 48);
        case 8: return std::make_unique<ZombiStudent>("ZombiStudent", 75, 14, "Study", 38);
        case 9: return std::make_unique<CyberZombi>("CyberZombi", 110, 22, "Hack", 55);
        case 10: return std::make_unique<Drone>("Drone", 70, 17, "Scan", 35);
        case 11: return std::make_unique<Robot>("Robot", 130, 24, "Compute", 65);
        case 12: return std::make_unique<ZombiWolf>("ZombiWolf", 85, 21, "Hunt", 43);
        case 13: return std::make_unique<ZombiPigeon>("ZombiPigeon", 60, 12, "Fly", 30);
        case 14: return std::make_unique<ZombiBear>("ZombiBear", 140, 28, "Maul", 70);
        case 15: return std::make_unique<ZombiDog>("ZombiDog", 80, 16, "Bite", 40);
        case 16: return std::make_unique<SmallBusinessman>("SmallBusinessman", 75, 15, "Trade", 38);
        case 17: return std::make_unique<HugeBusinessman>("HugeBusinessman", 100, 20, "Invest", 50);
        case 18: return std::make_unique<Official>("Official", 90, 18, "Bribe", 45);
        case 19: return std::make_unique<Banker>("Banker", 95, 19, "Bank", 48);
        default: return std::make_unique<Bodybuilder>("Bodybuilder", 100, 20, "Strength", 50);
    }
}

std::unique_ptr<Entity> selectAICharacter() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 19);
    int choice = dis(gen);

    switch (choice) {
        case 1: return std::make_unique<Bodybuilder>("AI Bodybuilder", 100, 20, "Strength", 50);
        case 2: return std::make_unique<Child>("AI Child", 50, 5, "Play", 20);
        case 3: return std::make_unique<Scientist>("AI Scientist", 80, 15, "Research", 40);
        case 4: return std::make_unique<Military>("AI Military", 120, 25, "Combat", 60);
        case 5: return std::make_unique<ZombiTeacher>("AI ZombiTeacher", 90, 18, "Teach", 45);
        case 6: return std::make_unique<ZombiDoctor>("AI ZombiDoctor", 85, 16, "Heal", 42);
        case 7: return std::make_unique<ZombiPolice>("AI ZombiPolice", 95, 19, "Arrest", 48);
        case 8: return std::make_unique<ZombiStudent>("AI ZombiStudent", 75, 14, "Study", 38);
        case 9: return std::make_unique<CyberZombi>("AI CyberZombi", 110, 22, "Hack", 55);
        case 10: return std::make_unique<Drone>("AI Drone", 70, 17, "Scan", 35);
        case 11: return std::make_unique<Robot>("AI Robot", 130, 24, "Compute", 65);
        case 12: return std::make_unique<ZombiWolf>("AI ZombiWolf", 85, 21, "Hunt", 43);
        case 13: return std::make_unique<ZombiPigeon>("AI ZombiPigeon", 60, 12, "Fly", 30);
        case 14: return std::make_unique<ZombiBear>("AI ZombiBear", 140, 28, "Maul", 70);
        case 15: return std::make_unique<ZombiDog>("AI ZombiDog", 80, 16, "Bite", 40);
        case 16: return std::make_unique<SmallBusinessman>("AI SmallBusinessman", 75, 15, "Trade", 38);
        case 17: return std::make_unique<HugeBusinessman>("AI HugeBusinessman", 100, 20, "Invest", 50);
        case 18: return std::make_unique<Official>("AI Official", 90, 18, "Bribe", 45);
        case 19: return std::make_unique<Banker>("AI Banker", 95, 19, "Bank", 48);
        default: return std::make_unique<Bodybuilder>("AI Bodybuilder", 100, 20, "Strength", 50);
    }
}

int main() {
    std::srand(std::time(nullptr)); 
    std::cout << "=== ДОБРО ПОЖАЛОВАТЬ В ИГРУ ===" << std::endl;
    
    auto player = selectPlayerCharacter();
    auto ai = selectAICharacter();

    BattleSystem battle(*player, *ai, false);
    
    battle.startBattle();

    return 0;
} 