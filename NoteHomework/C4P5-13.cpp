//
// Created by Dz on 24-5-10.
//
const int ArSize = 20;
#include "iostream"
int main() {
    using namespace std;
    char name[ArSize];
    cout << "Your first name ,please:";
    cin >> name;
    cout << "Here is your name,verticalized and Asciiized :" << endl;
    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << ":" << int(name[i]) << endl;
        i++;
    }
}