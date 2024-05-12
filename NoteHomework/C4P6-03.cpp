//
// Created by Dz on 24-5-12.
//
#include "iostream"
const int Fave = 27;
int main() {
    using namespace std;
    int n;
    cout << "Enter a number in the range";
    cout << "My favourite number";
    do {
        cin >> n;
        if (n < Fave) {
            cout << "Too low" << endl;
        } else if (n > Fave) {
            cout << "Too high" << endl;
        } else {
            cout << "Yes is 27" << endl;
        }
    } while (n != Fave);
}