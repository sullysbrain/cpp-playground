#!/bin/bash

# Compile and run the code
clang++ -std=c++11 src/main.cpp src/hello.cpp -o build/myprogram 

# Run the program
./build/myprogram