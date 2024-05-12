//
// Created by Dz on 24-5-12.
//
#include "cstdlib"
#include "fstream"
#include "iostream"

const int SIZE = 60;

int main() {
    using namespace std;
    char fileName[SIZE];
    ifstream inFile;
    cout << "Enter the name of data file: ";
    cin.getline(fileName, SIZE);
    inFile.open(fileName);
    if (!inFile.is_open()) {
        cout << "Couldnt open the file";
        cout << "program terminating";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;


    inFile >> value;
    while (inFile.good()) {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End" << endl;
    else if (inFile.fail())
        cout << "Input terminated by data mismatch";
    else
        cout << "Unknown reason";

    if (count == 0) {
        cout << "Nodata ";
    } else {
        cout << "Read:" << count;
        cout << "Sum:" << sum;
    }
    inFile.close();
}