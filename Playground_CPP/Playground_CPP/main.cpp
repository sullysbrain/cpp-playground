
#include <iostream>
#include "Log.h"


int main() {
    
    int a = 8;
    a++;

    const char* message = "Hello, World!";
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << " ";
    }
    std::cout << message << std::endl;
    
    // generate a loop sequence that iterates through the first 100 numbers of the fibonacci sequence
    int fib[100];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < 100; i++)
    {
        std::cout << fib[i] << " ";
    }
    std::cout << std::endl;
    

}
