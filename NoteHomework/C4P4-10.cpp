//
// Created by Dz on 24-5-8.
//
#include "cstring"
#include "iostream"
#include "string"

int main() {
    using namespace std;
    char charr[20];
    string str;
    ///////////
    cout << strlen(charr) << endl;
    cout << str.size() << endl;
    ///////////
    cin.getline(charr, 20);
    cout << charr << endl;
    getline(cin, str);
    cout << str << endl;
}