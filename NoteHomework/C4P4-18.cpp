//
// Created by Dz on 24-5-8.
//
#include "iostream"
int main() {
    using namespace std;
    double *p3 = new double[3];
    p3[0] = 18.156;
    p3[1] = 0.99999;
    p3[2] = 0.156;
    cout << p3[0] << endl;
    cout << p3[1] + p3[2] << endl;
    delete[] p3;
}