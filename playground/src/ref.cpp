#include <cstdio>
#include <iostream>
#include <bitset>
#include <string>

void addone(int& y) {
    y = y + 1;
    std::cout << "y add: " << &y <<std::endl;
    std::cout << "y val: " << y <<std::endl;
    std::cout << "y size: " << sizeof(y) <<std::endl;

    const int n = 8;
    std::string binary = std::bitset<n>(y).to_string();
    std::cout << "y bin: " << binary << std::endl;

}

int main() {

    std::cout << "Reference app" << std::endl;

    int x = 100;
    int& ref = x;

    std::cout << "x: " << x << std::endl;
    std::cout << "ref: " << ref << std::endl;

    x = x + 1;
    addone(x);

    std::cout << "x: " << x << std::endl;
    std::cout << "ref: " << ref << std::endl;

    std::cout << "x add: " << &x <<std::endl;
    std::cout << "ref add: " << &ref <<std::endl;


}
