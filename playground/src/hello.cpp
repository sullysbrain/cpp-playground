#include "hello.h"
#include <iostream>

int value = 42;

bool isThisEven(int x) {
    // value = value + 1;
    std::cout << "Hello, World!" << std::endl;
    return x % 2 == 0;
}

void anotherFunction() {
    // value = 10;
    std::cout << "This is another function." << std::endl;
}
