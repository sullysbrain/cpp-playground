#!/bin/bash

# Compile and run the code
clang++ -std=c++11 src/ref.cpp -o build/ref 

# Run the program
./build/ref
