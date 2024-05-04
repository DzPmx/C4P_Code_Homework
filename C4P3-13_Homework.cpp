//
// Created by Dz on 24-5-5.
//3.6 复习题
#include "iostream"

int main() {
    using namespace std;
    //2
    short valueA = 80;
    unsigned int valueB = 42110;
    long long valueC = 3000000000;
    //5
    char gradeA = 65;
    char gradeB = 'A';
    std::cout << gradeA << "|" << gradeB << endl;
    //6
    char ch = 88;
    std::cout << ch << endl;
    //9
    double x1 = 1.925;
    double x2 = 3.54159;
    int sum1 = int(x1) + int(x2);
    int sum2 = (int) (x1 + x2);
    std::cout << sum1 << "|" << sum2 << endl;
    //10
    auto cars = 15;
    auto iou = 150.37;
    auto level = 'B';
    auto crat = U'\U00002155';
    auto fract = 8.25f / 2.5;
}