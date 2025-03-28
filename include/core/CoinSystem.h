#ifndef COINSYSTEM_H
#define COINSYSTEM_H

#include <stdexcept>

class CoinSystem {
private:
    int coins = 0;  

public:
    void addCoins(int amount);
    bool spendCoins(int amount);
    int getBalance() const;
    void reset();
    void setIncomeMultiplier(float multiplier);
};

#endif