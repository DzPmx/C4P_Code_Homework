//
// Created by Dz on 24-5-7.
//
#include "cstring"
#include "iostream"

int main() {
    using namespace std;
    const int size = 15;
    char name1[size];
    char name2[size] = "C++owboy";
    cout << name2;
    cin >> name1;
    cout << name1[0];
    cout << "name1 is an array of" << sizeof(name1) << endl;
}