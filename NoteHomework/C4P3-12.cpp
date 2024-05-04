//
// Created by Dz on 24-5-5.
// 不同的强制类型转换
#include "iostream"
int main() {
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks: " << auks << endl;
    cout << "coots: " << coots << endl;
    char ch = 'Z';
    cout << "The Code For " << ch << " Is " << static_cast<int>(ch) << endl;
}
