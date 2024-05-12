//
// Created by Dz on 24-5-12.
//
#include "iostream"

int main() {
    using namespace std;
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y') {
        cout << "you were warned";
    } else if (ch == 'N' || ch == 'n') {
        cout << "OK";
    } else {
        cout << "Illegal import";
    }
}