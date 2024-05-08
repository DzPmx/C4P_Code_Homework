//
// Created by Dz on 24-5-9.
//
#include "iostream"
struct period {
    int year;
};

int main() {
    using namespace std;
    period s01, s02, s03;
    s01.year = 1998;
    period *pa = &s02;
    pa->year = 2004;


    period trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl;//trio为数组的第0个元素


    const period *arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;//arp，arp[1]为数组第二个元素

    const period **ppa = arp;
    cout << (*(ppa + 1))->year << endl;

    auto ppb = arp;
    cout << (*(ppb + 1))->year << endl;
}