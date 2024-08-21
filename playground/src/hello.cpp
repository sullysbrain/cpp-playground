#include "hello.hpp"
#include <iostream>

int value = 42;

bool isThisEven(int x) {
    // value = value + 1;
    std::string s = "Hello, World!";
    std::cout << s << std::endl;
    return x % 2 == 0;
}

void anotherFunction() {
    // value = 10;
    std::cout << "This is another function." << std::endl;
}
