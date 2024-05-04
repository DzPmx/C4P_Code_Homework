#include "iostream"
int main() {
    using namespace std;
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more" << endl;
    carrots += 2;
    cout << "Now You Have" << carrots << " Carrots" << endl;
}