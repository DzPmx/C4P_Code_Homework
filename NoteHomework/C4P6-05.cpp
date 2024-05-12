//
// Created by Dz on 24-5-12.
//

#include "iostream"
const int ArSize = 6;
int main() {
    using namespace std;
    float naaq[ArSize];
    int i = 0;
    float temp;
    cout << "first value";
    cin >> temp;
    while (i < ArSize && temp >= 0) {
        naaq[i] = temp;
        ++i;
        if (i < ArSize) {
            cout << "Next value";
            cin >> temp;
        }
    }
    if (i == 0) {
        cout << "Have No data";
    } else {
        cout << "Enter your naaq";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; ++j) {
            if (naaq[j] > you)
                ++count;
        }
        cout << count;
    }
}