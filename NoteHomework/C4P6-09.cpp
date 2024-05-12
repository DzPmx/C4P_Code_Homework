//
// Created by Dz on 24-5-12.
//
#include "iostream"
using namespace std;
void ShowMenu();
void Report();
void Comfort();

int main() {
    ShowMenu();
    int choice;
    (cin >> choice).get();
    switch (choice) {
        case 1:
            ShowMenu();
            break;
        case 2:
            Report();
            break;
        default:
            cout << "It s default choice";
    }
}

void ShowMenu() {
    cout << "Please Enter 1,2,3,4,5" << endl;
}
void Report() {
    cout << "It s a Report";
}
void Comfort() {
    cout << "It s a Comfort";
}
