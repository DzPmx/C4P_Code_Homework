//
// Created by Dz on 24-5-8.
//cin.get 不读取并丢弃换行符

#include "iostream"
int main() {
    using namespace std;
    const int arSize = 20;
    char name1[arSize];
    char name2[arSize];
    //cin.get(name1, 20).get();
    cin.get(name1, 20);
    cout << name1;
    cin.get(name2, 20);
    cout << name2;
}