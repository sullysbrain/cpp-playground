#include <cstdio>
#include <iostream>
#include <bitset>
#include <string>
#include <typeinfo>

struct My_obj
{
    /* data */
    int height = {};
    int width = {};
    float deg = {};
    float vel = {};
 
};

void update_vel(My_obj& obj, float updated_vel) {
    std::cout << "Updateding obj" << std::endl;
    obj.vel = updated_vel;
}

void addone(int& y) {
    y = y + 1;
    std::cout << "y add: " << &y <<std::endl;
    std::cout << "y val: " << y <<std::endl;
    std::cout << "y size: " << sizeof(&y) <<std::endl;

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

    My_obj myobj;
    myobj.vel = 10.0;
    std::cout << "Speed1: " << myobj.vel <<std::endl;
    update_vel(myobj, 13.0);
    std::cout << "Speed2: " << myobj.vel <<std::endl;


}
