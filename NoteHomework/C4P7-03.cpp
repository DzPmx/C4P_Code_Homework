//
// Created by Dz on 24-5-13.
//
#include "iostream"
using namespace std;
void n_chars(char, int);
int main() {
    int times;
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    while (ch != 'q') {
        cout << "Enter an integer";
        cin >> times;
        n_chars(ch, times);
        cin >> ch;
    }
}

void n_chars(char c, int n) {
    while (n-- > 0)
        cout << c;
}