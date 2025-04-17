CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -Iinclude 
GTEST_FLAGS = -lgtest -lgtest_main -lpthread

SRC_DIR = src/entities/ZombiPeople
TEST_DIR = tests
BUILD_DIR = build

$(shell mkdir -p $(BUILD_DIR))

REQUIRED_SRCS = \
	$(wildcard $(SRC_DIR)/ZombiPolice.cpp) \
	$(wildcard src/core/BattleSystem.cpp) \
	$(wildcard src/core/CardSystem.cpp) \
	$(wildcard src/core/CoinSystem.cpp) \
	$(wildcard src/entities/Elite/Banker.cpp) \
	$(wildcard src/entities/DefPeople/Bodybuilder.cpp) \
    $(wildcard src/Entity.cpp) \
    $(wildcard $(SRC_DIR)/ZombiStudent.cpp) \
	$(wildcard src/core/Player.cpp) \
	$(wildcard src/core/AI.cpp)

ifeq ($(REQUIRED_SRCS),)
    $(error Не найдены исходные файлы в $(SRC_DIR))
endif

TEST_SRC = $(wildcard $(TEST_DIR)/test_main.cpp)
ifeq ($(TEST_SRC),)
    $(error Не найден тестовый файл $(TEST_DIR)/test_main.cpp)
endif

TEST_EXEC = $(BUILD_DIR)/run_tests

all: $(TEST_EXEC)

$(TEST_EXEC):
	@echo "Компиляция тестов из: $(REQUIRED_SRCS) $(TEST_SRC)"
	$(CXX) $(CXXFLAGS) -o $@ $(REQUIRED_SRCS) $(TEST_SRC) $(GTEST_FLAGS)
	@echo "Сборка завершена. Исполняемый файл: $(TEST_EXEC)"

test: $(TEST_EXEC)
	@echo "Запуск тестов..."
	./$(TEST_EXEC)

clean:
	rm -rf $(BUILD_DIR)
	@echo "Очистка завершена"

.PHONY: all test clean