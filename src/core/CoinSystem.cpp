#include "CoinSystem.h"

void CoinSystem::addCoins(int amount) {
    if (amount < 0) {
        throw std::invalid_argument("Количество монет не может быть отрицательным");
    }
    coins += amount;
}

bool CoinSystem::spendCoins(int amount) {
    if (amount < 0) {
        throw std::invalid_argument("Количество монет не может быть отрицательным");
    }
    if (coins >= amount) {
        coins -= amount;
        return true;
    }
    return false;
}

int CoinSystem::getBalance() const {
    return coins;
}

void CoinSystem::reset() {
    coins = 0;
}