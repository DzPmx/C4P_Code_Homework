//
// Created by Dz on 24-5-5.
//
#include "iostream"
int main() {
    using namespace std;

    //4
    //    long second;
    //    cin >> second;
    //    int days = second / (60 * 60 * 24);
    //    int hours = (second - days * 60 * 60 * 24) / 60 / 60;
    //    int miuntes = (second - days * 60 * 60 * 24 - hours * 60 * 60) / 60;
    //    int seconds = (second - days * 60 * 60 * 24 - hours * 60 * 60 - miuntes * 60);
    //    cout << "Days: " << days << " Hours: " << hours << " miuntes: " << miuntes << " Seconds: " << seconds;

    //5
    //    long long int global;
    //    cin >> global;
    //    long long int local;
    //    cin >> local;
    //    float percent = float(local) / float(global);
    //    cout << "Percent:" << percent * 100 << "%" << endl;

    //7
    float americanGusConsume;
    cout << "Enter Your Gus Consume : ";
    cin >> americanGusConsume;
    float galenPer100Km = americanGusConsume / 3.785f;
    //100Km=62.14Miles
    float milesPerGalen = 62.14f / galenPer100Km;
    cout << galenPer100Km << "|" << milesPerGalen;
}