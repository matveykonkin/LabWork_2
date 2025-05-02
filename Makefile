# Компилятор и флаги
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude
LDFLAGS = 

# Исходные файлы
SRC_DIR = src
SRCS = $(SRC_DIR)/main.cpp \
       $(SRC_DIR)/Entity.cpp \
       $(wildcard $(SRC_DIR)/core/*.cpp) \
       $(wildcard $(SRC_DIR)/entities/DefPeople/*.cpp) \
       $(wildcard $(SRC_DIR)/entities/ZombiPeople/*.cpp) \
       $(wildcard $(SRC_DIR)/entities/TechnologicalEntities/*.cpp) \
       $(wildcard $(SRC_DIR)/entities/ZombiAnimals/*.cpp) \
       $(wildcard $(SRC_DIR)/entities/Elite/*.cpp)

# Объектные файлы
OBJ_DIR = obj
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Исполняемый файл
TARGET = game

# Правила
.PHONY: all clean directories

all: directories $(TARGET)

directories:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/core
	@mkdir -p $(OBJ_DIR)/entities/DefPeople
	@mkdir -p $(OBJ_DIR)/entities/ZombiPeople
	@mkdir -p $(OBJ_DIR)/entities/TechnologicalEntities
	@mkdir -p $(OBJ_DIR)/entities/ZombiAnimals
	@mkdir -p $(OBJ_DIR)/entities/Elite

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Зависимости
$(OBJ_DIR)/main.o: include/Entity.h include/core/Player.h include/core/AI.h include/core/BattleSystem.h
$(OBJ_DIR)/Entity.o: include/Entity.h
$(OBJ_DIR)/core/Player.o: include/core/Player.h include/Entity.h
$(OBJ_DIR)/core/AI.o: include/core/AI.h include/Entity.h
$(OBJ_DIR)/core/BattleSystem.o: include/core/BattleSystem.h include/core/Player.h include/core/AI.h include/Entity.h