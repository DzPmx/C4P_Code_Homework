//
// Created by Dz on 24-5-10.
//
#include "iostream"
const int Cities = 5;
const int Years = 4;

int main() {
    using namespace std;
    const char *cities[Cities] = {
            "OneOne", "TwoTwo", "ThreeThree", "FourFour", "FiveFive"};
    int maxtemps[Years][Cities] = {
            {0, 1, 2, 3, 4},
            {5, 6, 7, 8, 9},
            {10, 11, 12, 13, 14},
            {15, 16, 17, 18, 19}};
    for (int i = 0; i < Years; ++i) {
        cout << cities[i] << ": ";
        for (int j = 0; j < Cities; ++j) {
            cout << maxtemps[i][j] << " ";
        }
        cout << endl;
    }
}