SOURCE_DIR = src
BUILD_DIR = build
HEADER = header
TEST_DIR = test
CXX = clang++
CXXFLAGS = -g -Wall -Wextra -Wpedantic -std=c++20
INCLUDED_DIR = -I$(HEADER)
TEST_LIBS = -lgtest -lgtest_main -lpthread

all: $(BUILD_DIR)/test

$(BUILD_DIR)/test: $(BUILD_DIR)/power.o $(BUILD_DIR)/test.o
	$(CXX) $(BUILD_DIR)/power.o $(BUILD_DIR)/test.o -o $(BUILD_DIR)/test $(TEST_LIBS)

$(BUILD_DIR)/power.o: $(SOURCE_DIR)/power.cpp $(HEADER)/power.hpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDED_DIR) $(SOURCE_DIR)/power.cpp -o $(BUILD_DIR)/power.o

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp $(HEADER)/power.hpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDED_DIR) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o

test: $(BUILD_DIR)/test
	./$(BUILD_DIR)/test

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/test

.PHONY: all test clean