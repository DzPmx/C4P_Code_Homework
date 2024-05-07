//
// Created by Dz on 24-5-8.
//换行符在输入队列中被第二个get捕捉，导致直接输出
#include "iostream"
int main() {
    using namespace std;
    const int arSize = 20;
    char name[arSize];
    char dessert[arSize];
    cout << "Enter your name" << endl;
    cin >> name;
    cout << name << endl;
    cout << "Enter your dessert" << endl;
    cin.get(dessert, 20).get();
    cout << dessert << endl;
}