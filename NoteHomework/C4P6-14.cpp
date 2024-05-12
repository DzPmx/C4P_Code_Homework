//
// Created by Dz on 24-5-12.
//
#include "iostream"
const int Max = 5;
int main() {
    using namespace std;
    int golf[Max] = {};
    int i;
    for (i = 0; i < Max; ++i) {
        cout << "round #" << i + 1 << endl;
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') { continue; }//把所有空字符之前的字符全部删除
            cout << "Please enter a number";
        }
    }

    double total = 0.0;
    for (i = 0; i < Max; ++i) {
        total += golf[i];
    }
    cout << total / Max << endl;
}