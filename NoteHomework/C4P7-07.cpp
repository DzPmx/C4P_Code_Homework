//
// Created by Dz on 24-6-1.
//
//const 避免函数修改数组变量值
#include "iostream"

const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main() {
    using namespace std;
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0) {
        double factor;
        while (!(cin >> factor)) {
            cout << "Bad Input" << endl;
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done" << endl;
}

int fill_array(double ar[], int limit) {
    using namespace std;
    double temp;
    int j;
    for (j = 0; j < limit; ++j) {
        cout << "Enter value" << endl;
        cin >> temp;
        if (!cin) {
            cout << "Bad input" << endl;
            break;
        } else if (temp < 0) {
            break;
        }
        ar[j] = temp;
    }
    return j;
}

void show_array(const double ar[], int n) {
    using namespace std;
    for (int i = 0; i < n; ++i) {
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n) {
    for (int i = 0; i < n; ++i) {
        ar[i] *= r;
    }
}