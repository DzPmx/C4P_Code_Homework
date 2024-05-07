//
// Created by Dz on 24-5-7.
#include "iostream"
int main() {
    using namespace std;
    const int arSize = 20;
    char name1[arSize];
    char name2[arSize];
    cin.getline(name1, 20);
    cout << name1;
    cin.getline(name2, 20);
    cout << name2;
}
