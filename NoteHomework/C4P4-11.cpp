//
// Created by Dz on 24-5-8.
//
#include "iostream"

struct inflatable {
    std::string name;
    float volume;
    double price;
};

int main() {
    using namespace std;
    inflatable guest = {"Gloria", 20.5f, 18.89};
    inflatable payer = {};
    payer.name = "joey";
    payer.volume = 30.0f;
    payer.price = 28.89;

    cout << guest.name << "/////" << payer.name << endl;
    cout << payer.volume << endl;
    cout << guest.volume + 10.0f << endl;

    cout << "Total Price: " << guest.price + payer.price << endl;
}