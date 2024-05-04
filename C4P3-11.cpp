//
// Created by Dz on 24-5-5.
//  除法的不同情况
//
#include "iostream"
int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer D: " << 9 / 5 << endl;
    cout << "Floating D: " << 9.0f / 5.0f << endl;
    cout << "Floating D: " << 9 / 1.9f << endl;
    cout << "Double D: " << 1.25e16 / 3.0 << endl;
}