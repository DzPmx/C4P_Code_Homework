//
// Created by Dz on 24-5-8.
//
#include "iostream"
#include "string"
int main() {
    using namespace std;
    string s1 = "penguin";
    string s2, s3;
    s2 = s1;
    s3 = s2 + ' ' + s1;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
}