//
// Created by Dz on 24-5-11.
//
#include "array"
#include "iostream"
#include <string>
int main() {
    using namespace std;
    //1
    //    int a;
    //    int b;
    //    cin >> a >> b;
    //    int sum = 0;
    //    for (int i = a; i <= b; i++) {
    //        sum += i;
    //    }
    //    cout << sum << endl;

    //2
    //    const int ArSize = 16;
    //    array<long double, ArSize> factorials{};
    //    factorials[1] = factorials[0] = 1.0;
    //    for (int i = 2; i < ArSize; i++) {
    //        factorials[i] = i * factorials[i - 1];
    //    }
    //    for (int i = 0; i < ArSize; ++i) {
    //        cout << i << "!=" << factorials[i] << endl;
    //    }

    //3
    //    int i;
    //    cin >> i;
    //    int sum = 0;
    //    while (i != 0) {
    //        sum += i;
    //        cin >> i;
    //    }
    //    cout << sum;

    //4
    //    double daphne = 100;
    //    double cleo = 100;
    //    int year = 0;
    //    while (cleo <= daphne) {
    //        daphne += 10;
    //        cout << daphne << endl;
    //        cleo *= 1.05;
    //        cout << cleo << endl;
    //        year++;
    //    }
    //    cout << "Year: " << year << endl;
    //    cout << "Daphne: " << daphne << endl;
    //    cout << "Cleo: " << cleo << endl;

    //5
    //    const char *book[12] = {
    //            "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    //
    //    int numbPerMonth;
    //    int sum = 0;
    //
    //    for (int i = 0; i < 12; i++) {
    //        cout << book[i] << ":";
    //        cin >> numbPerMonth;
    //        sum += numbPerMonth;
    //    }
    //
    //    cout << "The year of C++ For Fools number is: " << sum << endl;
    //    return 0;

    //6
    //    int bookSales[3][12];
    //    int year3Sales = 0;
    //    for (int i = 0; i < 3; ++i) {
    //        cout << i + 1 << " Year,";
    //        int month12Sales = 0;
    //        for (int j = 0; j < 12; ++j) {
    //            cout << j + 1 << " Month:";
    //            cin >> bookSales[i][j];
    //            month12Sales += bookSales[i][j];
    //        }
    //        cout << "month Sales" << month12Sales << endl;
    //        year3Sales += month12Sales;
    //    }
    //    cout << "3 year " << year3Sales << endl;

    //7
    //    struct car {
    //        string producer;
    //        int year;
    //    };
    //
    //    int carsNumb;
    //    cout << "How many cars do you wish to catalog?";
    //    (cin >> carsNumb).get();
    //    car *cars = new car[carsNumb];
    //    for (int i = 0; i < carsNumb; i++) {
    //        cout << "Car #" << i + 1 << ":" << endl;
    //        cout << "Please Enter the maker:";
    //        getline(cin, cars[i].producer);
    //        cout << "Please Enter the Year:";
    //        (cin >> cars[i].year).get();
    //    }
    //    cout << "Here is your collection:" << endl;
    //    for (int i = 0; i < carsNumb; ++i) {
    //        cout << cars[i].year << " ";
    //        cout << cars[i].producer << endl;
    //    }
    //    delete[] cars;

    //8
    string str;
    cout << "Enter words (to stop type the word done)";
    cin >> str;
    int num = 0;
    while (str != "done") {
        cin >> str;
        num++;
    }
    cout << num << endl;
}