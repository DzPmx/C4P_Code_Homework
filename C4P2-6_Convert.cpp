//
// Created by Dz on 24-5-4.
//
#include "iostream"
int Stone2Pounds(int);
int main() {
    using namespace std;
    int stone;
    cout << "Enter the weight in stone:";
    cin >> stone;
    int pounds = Stone2Pounds(stone);
    cout << stone << " stones = " << pounds << " pounds." << endl;
}
int Stone2Pounds(int sts) {
    return sts * 14;
}