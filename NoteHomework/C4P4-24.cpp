//
// Created by Dz on 24-5-9.
//

#include "array"
#include "iostream"
#include "vector"

int main() {
    using namespace std;
    double a1[4] = {1.0, 1.0, 5.0, 48};
    vector<double> a2(4);
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;
    std::array<double, 4> a3 = {1.0 / 3.0, 1.0 / 5.0, 1.0 / 7.0, 1.0 / 9.0};
    array<double, 4> a4 = a3;
}