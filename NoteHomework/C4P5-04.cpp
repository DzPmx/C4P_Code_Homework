//
// Created by Dz on 24-5-10.
//

#include "iostream"
const int ArSize = 16;
int main() {
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1ll;
    for (int i = 2; i < ArSize; ++i) {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < ArSize; ++i) {
        std::cout << factorials[i] << std::endl;
    }
}