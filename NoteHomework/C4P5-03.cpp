//
// Created by Dz on 24-5-9.
//
#include "iostream"
int main() {
    using namespace std;
    int x;
    cout << (x = 100) << endl;
    cout << (x <= 50) << endl;
    cout << (x >= 100) << endl;
    cout.setf(ios_base::boolalpha);
    cout << (x <= 50) << endl;
    cout << (x >= 100) << endl;
}