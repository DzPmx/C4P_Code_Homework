//
// Created by Dz on 24-5-9.
//
#include "cstring"
#include "iostream"
using namespace std;
char *getname(void);
int main() {
    char *name;
    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete[] name;

    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete[] name;
}
char *getname() {
    char temp[80];
    cout << "Enter the name " << endl;
    cin.get(temp, 80).get();
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}