//
// Created by Dz on 24-5-10.
//
#include "cstring"
#include "iostream"
int main() {
    using namespace std;
    char word[5] = "?ate";
    for (char i = 'a'; strcmp(word, "mate"); ++i) {
        cout << word << endl;
        word[0] = i;
    }
    cout << "Finally the word is " << word << endl;
}