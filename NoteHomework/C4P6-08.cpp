//
// Created by Dz on 24-5-12.
//
#include "cctype"
#include "iostream"
int main() {
    using namespace std;
    cout << "Enter text for analysis,and type @";
    char ch;
    int whiteSpace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch)) {
            chars++;
        } else if (isdigit(ch)) {
            digits++;

        } else if (isspace(ch)) {
            whiteSpace++;

        } else if (ispunct(ch)) {
            punct++;

        } else {
            others++;
        }
        cin.get(ch);
    }
    cout << "space" << whiteSpace << endl;
    cout << "digits" << digits << endl;
    cout << "chars" << chars << endl;
    cout << "punct" << punct << endl;
    cout << "others" << others << endl;
}