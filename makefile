# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Directories
SRC_DIR = C++-DSA_Library
BUILD_DIR = build
BIN_DIR = bin

# Source files
SRCS = $(wildcard $(SRC_DIR)/data_structure/*.cpp) $(wildcard $(SRC_DIR)/algorithms/*.cpp) tests/main.cpp
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

# Executable
TARGET = $(BIN_DIR)/dsa_library

# Default rule
all: $(TARGET)

# Build target
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile source files
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Run the program
run: all
	./$(TARGET)

.PHONY: all clean run
