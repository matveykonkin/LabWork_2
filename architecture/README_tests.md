Проведены тесты представителей из каждого типов способностей, главных систем проекта(AI и UI системы не тестировались напрямую так как они задействуются почти во всех классах и других системах)
Результаты тестов: 

[==========] Running 8 tests from 5 test suites.
[----------] Global test environment set-up.
[----------] 1 test from ZombiPoliceTest
[ RUN      ] ZombiPoliceTest.ArrestAbility
Zombi Police использует способность: Arrest (противник пропускает ход)
[       OK ] ZombiPoliceTest.ArrestAbility (0 ms)
[----------] 1 test from ZombiPoliceTest (0 ms total)

[----------] 1 test from BattleSystemTest
[ RUN      ] BattleSystemTest.DamageTest
[       OK ] BattleSystemTest.DamageTest (0 ms)
[----------] 1 test from BattleSystemTest (0 ms total)

[----------] 1 test from CardTest
[ RUN      ] CardTest.CardCreation
[       OK ] CardTest.CardCreation (0 ms)
[----------] 1 test from CardTest (0 ms total)

[----------] 3 tests from CoinSystemTest
[ RUN      ] CoinSystemTest.AddCoins
[       OK ] CoinSystemTest.AddCoins (0 ms)
[ RUN      ] CoinSystemTest.SpendCoins
[       OK ] CoinSystemTest.SpendCoins (0 ms)
[ RUN      ] CoinSystemTest.Reset
[       OK ] CoinSystemTest.Reset (0 ms)
[----------] 3 tests from CoinSystemTest (0 ms total)

[----------] 2 tests from BodybuilderTest
[ RUN      ] BodybuilderTest.SuperStrengthAbility
Bodybuilder использует способность: Суперсила (удваивает урон)
[       OK ] BodybuilderTest.SuperStrengthAbility (0 ms)
[ RUN      ] BodybuilderTest.InitialStats
[       OK ] BodybuilderTest.InitialStats (0 ms)
[----------] 2 tests from BodybuilderTest (0 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 5 test suites ran. (0 ms total)
[  PASSED  ] 8 tests.
