//
//  main.cpp
//  Playground_CPP
//
//  Created by Scott Sullivan on 3/3/23.
//

#include <iostream>
#include "Log.h"

#define LOG(x) std::cout << x << std::endl;

int main() {
    
    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    
    LOG(var);
    
    std::cin.get();
    
    
}
