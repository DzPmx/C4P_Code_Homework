//
// Created by Dz on 24-5-5.
//  加减乘除
//
#include "iostream"
int main() {
    using namespace std;
    float hats, heads;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter A Number";
    cin >> hats;
    cout << "Enter Another Numer";
    cin >> heads;
    cout << "+: " << hats + heads << endl;
    cout << "-: " << hats - heads << endl;
    cout << "*: " << hats * heads << endl;
    cout << "/: " << hats / heads << endl;
    int num = 6 % 5;
    cout << "%:" << num << endl;
}