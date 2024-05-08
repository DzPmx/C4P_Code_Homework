//
// Created by Dz on 24-5-9.
//使用指针访问结构体成员变量的方法
#include "iostream"
struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    using namespace std;
    inflatable *ps = new inflatable;
    cout << "Enter the name";
    cin.getline(ps->name, 20);
    cout << "Enter volume in cubic feet";
    cin >> (*ps).volume;
    cout << "Enter price";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price:" << ps->price << endl;
    delete ps;
}
