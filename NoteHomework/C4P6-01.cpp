//
// Created by Dz on 24-5-11.
//
#include "iostream"
int main() {
    using namespace std;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    //遇到.停止输入
    while (ch != '.') {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << spaces << endl;
    cout << total << endl;
}