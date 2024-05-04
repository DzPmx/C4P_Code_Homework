//
// Created by Dz on 24-5-4.
//
#include "iostream"
int Long2Miles(int);
void Mice();
void See();
int Age2Month(int);
void ShowTime(int, int);


//HomeWork2
//int main() {
//    using namespace std;
//    cout << "Please Enter Your Long:";
//    int miles;
//    cin >> miles;
//    cout << "Your Miles Is " << Long2Miles(miles) << endl;
//}


//HomeWork3
//int main() {
//    Mice();
//    Mice();
//    See();
//    See();
//}

//HomeWork4
//int main() {
//    using namespace std;
//    cout << "Input Your Age:";
//    int age;
//    cin >> age;
//    cout << "you have been born " << Age2Month(age) << " months" << endl;
//}

//HomeWork7
int main() {
    using namespace std;
    int hours;
    int minutes;
    cout << "Enter the number of hours :";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> minutes;
    ShowTime(hours, minutes);
}

int Long2Miles(int Long) {
    return 220 * Long;
}

void Mice() {
    using namespace std;
    cout << "Three blind mice" << endl;
}

void See() {
    using namespace std;
    cout << "See how they run" << endl;
}

int Age2Month(int age) {
    return 12 * age;
}

void ShowTime(int hour, int minutes) {
    using namespace std;
    cout << "Time: " << hour << ":" << minutes << endl;
}