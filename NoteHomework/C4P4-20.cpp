//
// Created by Dz on 24-5-9.
//
#include "cstring"
#include "iostream"
int main() {
    using namespace std;
    char animal[20] = "bear";
    const char *brid = "wren";
    char *ps;
    cout << animal << " and " << brid << endl;
    cout << "Enter a kind of animal";
    cin >> animal;

    ps = animal;
    cout << ps << endl;
    cout << "Before using strcpy()" << endl;
    cout << animal << "At" << (int *) animal << endl;
    cout << ps << "At" << (int *) ps << endl;
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "after use ctrcpy()" << endl;
    cout << ps << "At" << (int *) ps << endl;
    delete[] ps;
}
