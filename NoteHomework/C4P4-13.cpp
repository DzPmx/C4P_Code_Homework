//
// Created by Dz on 24-5-8.
//
#include "iostream"

struct inflatable {
    std::string name;
    float volume;
    double price;
};

enum Colors {
    red,
    yellow,
    green,
    black,
};
int main() {
    inflatable guest[2] = {
            {"Bambi", 0.5, 21.99},
            {"Godzilla", 2000, 565.99}};
    std::cout << "The Guests " << guest[0].name << " And " << guest[1].name << " Totally have " << guest[0].volume + guest[1].volume << " volume" << std::endl;
    Colors myCol;
    myCol = Colors(3);//可以给枚举中未出现的值
    std::cout << myCol << std::endl;
}