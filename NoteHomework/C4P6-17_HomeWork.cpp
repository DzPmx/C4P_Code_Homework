//
// Created by Dz on 24-5-12.
//
#include "cctype"
#include "fstream"
#include "iostream"

int main() {
    using namespace std;

    //1
    //    char ch;
    //    cin.get(ch);
    //    while (ch != '@') {
    //        if (isalpha(ch)) {
    //            if (isupper(ch)) {
    //                cout << char(tolower(ch));
    //            } else if (islower(ch)) {
    //                cout << char(toupper(ch));
    //            }
    //        } else if (!isdigit(ch)) {
    //            cout << ch;
    //        }
    //        cin.get(ch);
    //    }

    //2
    //    double donation[10] = {};
    //    double temp;
    //    double sum = 0;
    //    int i;
    //    for (i = 0; i < 10 && cin >> temp; ++i) {
    //        donation[i] = temp;
    //        sum += donation[i];
    //    }
    //    double avg = sum / i;
    //    cout << "Avg:" << avg << endl;
    //    for (int j = 0; j < 10; ++j) {
    //        if (donation[j] > avg) {
    //            cout << "greater than avg" << donation[j] << endl;
    //        }
    //    }

    //3

    //    char ch;
    //    cin.get(ch).get();
    //    while (ch != 'a' && ch != 'c' && ch != 'p' && ch != 't' && ch != 'g') {
    //        cout << "Please Enter a,c,p,t,g" << endl;
    //        cin.get(ch).get();
    //    }
    //    switch (ch) {
    //        case 'a':
    //            cout << "You Enter a " << endl;
    //            break;
    //        case 'c':
    //            cout << "You Enter c " << endl;
    //            break;
    //        case 'p':
    //            cout << "You Enter p " << endl;
    //            break;
    //        case 't':
    //            cout << "You Enter t " << endl;
    //            break;
    //        case 'g':
    //            cout << "You Enter g " << endl;
    //            break;
    //    }

    //4
    //    const int STRSIZE = 16;
    //    struct bop {
    //        char fullname[STRSIZE];
    //        char title[STRSIZE];
    //        char bopName[STRSIZE];
    //        int preference;
    //    };
    //    bop participator[3] = {
    //            {"jimmy", "lawyer", "jim", 1},
    //            {"jenny", "walker", "jane", 2},
    //            {"Sunny", "SOB", "Sun", 3},
    //    };
    //
    //    char style = 0;
    //    cout << "what style do you prefer?";
    //    cin.get(style);
    //    while (style != 'q') {
    //        switch (style) {
    //            case 'a':
    //                for (int j = 0; j < 3; ++j) {
    //                    cout << participator[j].fullname << endl;
    //                }
    //                break;
    //            case 'b':
    //                for (int j = 0; j < 3; ++j) {
    //                    cout << participator[j].title << endl;
    //                }
    //                break;
    //            case 'c':
    //                for (int j = 0; j < 3; ++j) {
    //                    cout << participator[j].bopName << endl;
    //                }
    //                break;
    //            case 'd':
    //                for (int j = 0; j < 3; ++j) {
    //                    switch (participator[j].preference) {
    //                        case 1:
    //                            cout << participator[j].fullname << endl;
    //                            break;
    //                        case 2:
    //                            cout << participator[j].title << endl;
    //                            break;
    //                        case 3:
    //                            cout << participator[j].bopName << endl;
    //                            break;
    //                    }
    //                }
    //                break;
    //        }
    //        cin.get(style);
    //    }

    //5
    //    int money;
    //    while (cin >> money && money >= 0) {
    //        if (money > 35000) {
    //            double fee = 10000 * 0.1 + 20000 * 0.15 + (money - 35000) * 0.2;
    //            cout << fee << endl;
    //        } else if (money > 15000) {
    //            double fee = 10000 * 0.1 + (money - 15000) * 0.15;
    //            cout << fee << endl;
    //        } else if (money > 5000) {
    //            double fee = (money - 5000) * 0.1;
    //            cout << fee << endl;
    //        } else {
    //            cout << "No Fee" << endl;
    //        }
    //        cin >> money;
    //    }

    //8
    ifstream txtSource;
    txtSource.open("Test.txt", ios::in);
    if (!txtSource.is_open()) {
        cout << "Failed to open" << endl;
    }
    char ch;
    int charNum = 0;
    while (txtSource >> ch) {
        charNum++;
    }
    cout << charNum;
}