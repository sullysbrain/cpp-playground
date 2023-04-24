//
//  Log.cpp
//  Playground_CPP
//
//  Created by Scott Sullivan on 3/4/23.
//

#include <iostream>
#include "Log.h"

void Log(const char* message)
{
    std::cout << message << std::endl;

    // return the current time
    time_t now = time(0);
    // create a new string variable
    char* dt = ctime(&now);
    std::cout << "The local date and time is: " << dt << std::endl;

    // Loop ten times
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " ";
    }

    std::cout << "Hello, World!" << std::endl;
    
}
