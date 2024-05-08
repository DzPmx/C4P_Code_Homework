//
// Created by Dz on 24-5-8.
//

#include "iostream"
int main() {
    using namespace std;
    int higgens = 5;
    int *ptr = &higgens;
    std::cout << "higgens Value: " << higgens << " higgens Address: " << &higgens << endl;
    std::cout << "*ptr Value: " << *ptr << " ptr value: " << ptr << " whinch poiont higgens address. " << std::endl;
    std::cout << "ptr's  address: " << &ptr << endl;
    ///////////&ptr 代表ptr自己的地址，而ptr自己的地址内存的是指向higgens的地址，higgens地址的值则是5;
}