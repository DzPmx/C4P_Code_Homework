//
// Created by Dz on 24-5-5.
//
#include "iostream"
int main() {
    //数值精度的影响
    using namespace std;
    long double a = 2.34e+1;
    long double b = a + 1.0f;
    cout << "b: " << b - a << endl;
}