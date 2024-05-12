//
// Created by Dz on 24-5-10.
//
#include "iostream"
int main() {
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters,# to quit" << endl;
    cin.get(ch);
    while (ch != '#') {
        cout << ch;
        ++count;
        cin.get(ch);
        ;
    }
    cout << count << endl;
}