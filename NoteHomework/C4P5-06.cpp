//
// Created by Dz on 24-5-10.
//
#include "iostream"
#include "string"
int main() {
    using namespace std;
    cout << "Enter a word";
    string word;
    cin >> word;
    for (int i = 0; i < word.size(); ++i) {
        cout << word[i] << endl;
    }
}