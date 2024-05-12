//
// Created by Dz on 24-5-12.
//
#include "climits"
#include "iostream"
bool is_int(double x) {
    if (x <= INT_MAX && x >= INT_MIN) {
        return true;
    } else {
        return false;
    }
}
int main() {
    using namespace std;
    double num;
    cout << "Enter an integer value" << endl;
    cin >> num;
    while (is_int(num)) {
        cout << "Not an integer";
        cin >> num;
    }
    int val = int(num);
    cout << val;
}