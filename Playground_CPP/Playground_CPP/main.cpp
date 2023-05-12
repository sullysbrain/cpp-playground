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

    int int_var = 8;
    int* intPtr = &int_var;
    cout << intPtr << endl;
    cout << *intPtr << endl;
    int_var = int_var << 1;
    cout << int_var << endl;
    int_var = int_var << 1;
    cout << int_var << endl;
     


}