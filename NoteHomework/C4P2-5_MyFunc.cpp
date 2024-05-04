//
// Created by Dz on 24-5-4.
//
#include "iostream"
void simon(int);
int main() {
    using namespace std;
    cout << "Pick an Integer:" << endl;
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
}
void simon(int n) {
    using namespace std;
    cout << "Simon says touch your toes " << n << " times" << endl;
}