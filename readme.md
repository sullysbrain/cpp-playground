Various C++ files for ongoing experimentation and projects.
Mostly for testing before committing to a full project.

Used mostly for random c++ snippets

TODO: add compiler optimization notes based on recent findings at work. 
Currently I am using -O0 which is no optimizations. This is helping to avoid using multiple volatile tags in code.

TODO: Get Atmel ICE working with VSCode and/or Visual Studio 2022


clang++ hello.cpp -o test && ./test



# Catch2
clang++ -std=c++11 -o test test.cpp && ./test


# Without Catch2:
clang++ -std=c++11 src/main.cpp src/hello.cpp -o build/myprogram && ./build/myprogram
