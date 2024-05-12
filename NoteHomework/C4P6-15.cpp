//
// Created by Dz on 24-5-12.
//
#include "fstream"
#include "iostream"

int main() {
    using namespace std;

    char autoMobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("Test.txt");
    cin.getline(autoMobile, 50);
    cin >> year;
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model :" << autoMobile << endl;
    cout << "Year :" << year << endl;
    cout << "a price" << a_price << endl;
    cout << "d price" << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model :" << autoMobile << endl;
    outFile << "Year :" << year << endl;
    outFile << "a price:" << a_price << endl;
    outFile << "d price:" << d_price << endl;
    outFile.close();
}
