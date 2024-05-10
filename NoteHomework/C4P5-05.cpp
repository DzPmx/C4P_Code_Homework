//
// Created by Dz on 24-5-10.
//
#include "iostream"

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter an Integer";
    int by;
    cin >> by;
    cout << "Counting by: " << by << endl;
    for (int i = 0; i < 100; i += by) {
        cout << i << endl;
    }
}