//
// Created by Dz on 24-5-4.
//
#include "iostream"
int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII Code For " << ch << " Is " << i << endl;
    cout << "Add One To The  Character Code" << endl;
    ch += 1;
    i = ch;
    cout << "The ASCII Code For " << ch << " Is " << i << endl;
    cout.put(ch);
}