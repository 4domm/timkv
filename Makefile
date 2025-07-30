BUILD_DIR = build
CMAKE_FLAGS = -DCMAKE_BUILD_TYPE=Release

all: $(BUILD_DIR)/Makefile
	cmake --build $(BUILD_DIR)

$(BUILD_DIR)/Makefile:
	cmake -B $(BUILD_DIR) -S . $(CMAKE_FLAGS)

run: all
	./$(BUILD_DIR)/timkv

clean:
	rm -rf $(BUILD_DIR)
