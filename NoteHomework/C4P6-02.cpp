//
// Created by Dz on 24-5-12.
//
#include "iostream"

int main() {
    using namespace std;
    char ch;
    cout << "Type and i shall repeat";
    cin.get(ch);
    while (ch != '.') {
        if (ch == '\n') {
            cout << ch;
        } else {
            cout << ++ch;
        }
        cin.get(ch);
    }
}