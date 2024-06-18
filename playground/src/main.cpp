#include "hello.h"
#include <iostream>

// int value = 42;

void whichCVersion() {
    if (__cplusplus == 202101L) std::cout << "C++23";
    else if (__cplusplus == 202002L) std::cout << "C++20";
    else if (__cplusplus == 201703L) std::cout << "C++17";
    else if (__cplusplus == 201402L) std::cout << "C++14";
    else if (__cplusplus == 201103L) std::cout << "C++11";
    else if (__cplusplus == 199711L) std::cout << "C++98";
    else std::cout << "pre-standard C++." << __cplusplus;
    std::cout << "\n";
}


#ifndef CATCH_CONFIG_MAIN
int main() {
    std::cout << "Running code...\n";

    whichCVersion();

    int x = 9;
    int y = 42;
    
    bool isEven = (isThisEven(x));


    std::cout << x << " is even is ";

    // add a switch statement
    if (isEven) {
        std::cout << "true." << std::endl;
    } else {
        std::cout << "false." << std::endl;
    }

    // anotherFunction();
    return 0;
}
#endif