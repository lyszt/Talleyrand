.PHONY: build
# g++ -std=c++26 -I . main.cpp file_manager.cpp -o main -lstdc++fs
build: 
	cmake -B build 
	cmake --build build
	cp build/Talleyrand .