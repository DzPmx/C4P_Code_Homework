//
// Created by Dz on 24-5-10.
//
#include "iostream"
int main() {
    using namespace std;
    int ch;
    int count = 0;
    while ((ch = cin.get()) != EOF) {
        cout << char(ch);
        count++;
    }
    cout << endl
         << count;
}