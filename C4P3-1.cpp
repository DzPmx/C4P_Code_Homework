//
// Created by Dz on 24-5-4.
//
#include "climits"
#include "iostream"
int main() {
    using namespace std;
    int intMax = INT_MAX;
    short shortMax = SHRT_MAX;
    long longMax = LONG_MAX;
    long long longLongMax = LLONG_MAX;
    int setValue1(430);
    int setValue2{};

    cout << "Size Of Int: " << sizeof(int) << endl;
    cout << "Size Of Short: " << sizeof(short) << endl;
    cout << "Size Of Long: " << sizeof(long) << endl;
    cout << "Size Of Long Long: " << sizeof(long long) << endl;
    cout << "----------------------------------" << endl;
    cout << "Int Max: " << intMax << endl;
    cout << "Short Max: " << shortMax << endl;
    cout << "Long Max: " << longMax << endl;
    cout << "Long Long Max: " << longLongMax << endl;
}