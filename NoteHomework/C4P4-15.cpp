//
// Created by Dz on 24-5-8.
//

#include "iostream"
int main() {
    using namespace std;
    int updates = 6;
    int *p_updates;
    p_updates = &updates;
    cout << updates << endl;
    cout << *p_updates << endl;
    updates = 12;
    cout << *p_updates << endl;
    *p_updates = 16;
    cout << updates << endl;
}