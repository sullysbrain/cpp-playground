#!/bin/bash

# Compile and run the code
gcc -std=c++11 src/main.cpp src/hello.cpp -lstdc++ -o build/myprogram 

# Run the program
./build/myprogram
