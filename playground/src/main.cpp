#include "hello.h"
#include <iostream>

// int value = 42;

#ifndef CATCH_CONFIG_MAIN
int main() {
    std::cout << "Running code...\n";

    int x = 9;
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