//
// Created by Dz on 24-5-5.
//
#include "iostream"
int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 1.0 / 3.0;
    const float million = 1.0e6;
    cout << "tub: " << tub << endl;
    cout << "tub*millin: " << tub * 10 * million << endl;
    cout << "mint: " << mint << endl;
    cout << "mint*millin: " << mint * 10 * million << endl;
}