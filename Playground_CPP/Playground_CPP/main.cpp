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
    cout << "address: " << &intPtr << endl;
    cout << "raw intPtr " << intPtr << endl;
    cout << "dereference: " << *intPtr << endl;
    int_var = int_var << 1;
    cout << int_var << endl;
    int_var = int_var << 1;
    cout << int_var << endl;

    cout << "Pointers" << endl;
    cout << "int_var: " << int_var << endl;
    cout << "dereference: " << *intPtr << endl;
    --int_var;
    cout << "address: " << &intPtr << endl;
    cout << "Value: " << int_var << endl;

}