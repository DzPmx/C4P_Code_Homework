//
// Created by Dz on 24-5-9.
//
#include "iostream"
int main() {
    using namespace std;
    double wages[3] = {1000, 2000, 3000};
    short stacks[3] = {3, 2, 1};

    ////////////////
    double *pw = wages;
    short *pt = &stacks[0];
    ////////////////
    cout << pw << "|||||" << *pw << endl;
    cout << pt << "|||||" << *pt << endl;
    ////////////////
    pw += 1;
    pt += 1;
    cout << pw << "|||||" << *pw << endl;
    cout << pt << "|||||" << *pt << endl;
    ////////////////
    cout << *stacks << "|||||" << *(stacks + 1) << endl;
    cout << *wages << "|||||" << *(wages + 1) << endl;
}