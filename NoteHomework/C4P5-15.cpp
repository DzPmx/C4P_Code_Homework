//
// Created by Dz on 24-5-10.
//
#include "iostream"
int main() {
    using namespace std;
    //    int n;
    //    cout << "Enter numbers in the range 1-10 to find" << endl;
    //    cout << "My favourite  number" << endl;
    //    do {
    //        cin >> n;
    //    } while (n != 7);
    //    cout << "Yes 7 is my number" << endl;
    double prices[5] = {1.1, 2.2, 3.3, 4.95, 5.16};
    for (double x: prices) {
        cout << x << endl;
    }
}