//
//  main.cpp
//  Playground_CPP
//
//  Created by Scott Sullivan on 3/3/23.
//

#include <iostream>
using namespace std;

int main() {
    
    const char* names[] = {"Alice", "Bob", "Charlie"};

    for (int i = 0; i < (sizeof(names)/sizeof(names[0])); i++)
    {
        cout << names[i] << " : " << &names[i] << endl;
        
    }
    std::cout << message << std::endl;
    
}