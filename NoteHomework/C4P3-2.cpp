//
// Created by Dz on 24-5-4.
//
#include "iostream"
#define ZERO 0
#include "climits"
int main() {
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited" << endl;
    sam += 1;
    sue += 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited" << endl;
    sam -= 1;
    sue -= 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited" << endl;
}