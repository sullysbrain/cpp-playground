#include "hello.hpp"
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

class MyClass {
    int year;
    char message[20];
public:
    MyClass() {
        year = 2024;
        std::strcpy(message, "Hello World");
            
        std::cout << "MyClass constructor" << std::endl;
        std::cout << "Constructored with: " << year << std::endl;
        std::cout << "Constructored to say: " << message << std::endl;
    }
    MyClass(int year_in, const char* msg) {
        year = year_in;
        std::strncpy(message, msg, sizeof(message) - 1);
        message[sizeof(message) - 1] = '\0'; // Ensure null-termination

        std::cout << "MyClass constructor" << std::endl;
        std::cout << "Constructored with: " << year << std::endl;
        std::cout << "Constructored to say: " << message << std::endl;
    }
    bool set_year(int new_year){
        if (new_year < 2022) {
            year = new_year;
            return true;
        } else {
            return false;
        }
    }
    bool set_message(char* new_message){
        if (std::strlen(new_message) < 20) {
            std::strcpy(message, new_message);
            return true;
        } else {
            return false;
        }
    }
    int get_year() {
        return year;
    }
    char* get_message() {
        return message;
    }

};


#ifndef CATCH_CONFIG_MAIN
int main() {
    std::cout << "Running code...\n";

    whichCVersion();

    int x = 9;
    int y = 42;

    bool isEven = (isThisEven(x));

    std::cout << std::endl;

    MyClass birthYear;
    std::cout << "Year: " << birthYear.get_year() << std::endl;
    birthYear.set_year(1975);
    std::cout << "Year: " << birthYear.get_year() << std::endl;

    std::cout << std::endl;

    MyClass clock2(2023, "Custom Message");
    std::cout << "Clock2: " << clock2.get_year() << std::endl;
    std::cout << "Clock2: " << clock2.get_message() << std::endl;

    std::cout << std::endl;

    MyClass clock3{1999, "Prince"};
    std::cout << "Clock3: " << clock3.get_year() << std::endl;
    std::cout << "Clock3: " << clock3.get_message() << std::endl;
        
    std::cout << std::endl;

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