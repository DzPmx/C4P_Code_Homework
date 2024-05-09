//
// Created by Dz on 24-5-9.
//

#include "iostream"
int main() {
    using namespace std;
    cout << "Enter the loop limited value: ";
    int limit;
    cin >> limit;
    for (int i = 0; i < limit; ++i) {
        cout << "limit loops = " << i << endl;
    }
}