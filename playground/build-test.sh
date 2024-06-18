#!/bin/bash

# Compile the code
# clang++ -std=c++11 -Itests -Isrc -o build/test tests/test.cpp src/hello.cpp
clang++ -std=c++11 -Itests -Isrc -DTESTING -o ./build/test tests/test.cpp

# Run the tests
./build/test
