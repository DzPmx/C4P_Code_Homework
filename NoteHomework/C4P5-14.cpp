//
// Created by Dz on 24-5-10.
//
#include "ctime"
#include "iostream"
int main() {
    using namespace std;
    cout << "Enter the delay time,int seconds:";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "Staring" << endl;
    clock_t start = clock();
    while (clock() - start < delay) {
        cout << "Waiting" << endl;
    }
    cout << "Done";
}