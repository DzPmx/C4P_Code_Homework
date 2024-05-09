//
// Created by Dz on 24-5-9.
//
#include "cstring"
#include "iostream"
#include "string"
#include <array>

struct CandyBar {
    std::string brand;
    float weight;
    int calorie;
};

struct PizzaAnalyze {
    std::string name;
    int length;
    float weight;
};

void LogPizzaInfo();

void LogPizzaInfoDynamic();

int main() {
    using namespace std;


    //1
    //    char firstName[15];
    //    char lastName[15];
    //    char grade;
    //    unsigned short age;
    //    cout << "What is your first name?";
    //    cin.get(firstName, 15).get();
    //    cout << "What is your Last name?";
    //    cin.get(lastName, 15).get();
    //    cout << "What letter grade you deserve?";
    //    (cin >> grade).get();
    //    cout << "What is your age?";
    //    cin >> age;
    //    cout << "Name: " << lastName << " , " << firstName << endl;
    //    cout << "Grade: " << char(grade + 1) << endl;
    //    cout << "Age:" << age;

    //2
    //    string name;
    //    string dessert;
    //    cout << "Enter your name" << endl;
    //    getline(cin, name);
    //    cout << "Enter your favourate dessert";
    //    getline(cin, dessert);
    //    cout << "I have some dilicous " << dessert << endl;
    //    cout << "For you" << name << endl;

    //3
    //    char firstName[15];
    //    char lastName[15];
    //    char fullName[50] = {};//字符串拼接需要先初始化
    //    char ch[5] = ", ";
    //    cout << "Enter your first name:";
    //    cin.getline(firstName, 15);
    //    cout << "Enter your last name:";
    //    cin.getline(lastName, 15);
    //    strcat_s(fullName, lastName);
    //    strcat_s(fullName, ch);
    //    strcat_s(fullName, firstName);
    //    cout << fullName << endl;

    //    //4
    //    string firstName;
    //    string lastName;
    //    string fullName;
    //    cout << "Enter your first name:";
    //    getline(cin, firstName);
    //    cout << "Enter your last name:";
    //    getline(cin, lastName);
    //    fullName = lastName + ", " + firstName;
    //    cout << fullName;

    //5
    //    CandyBar snack{};
    //    snack.brand = "Mocha Munch";
    //    snack.weight = 2.3;
    //    snack.calorie = 350;
    //    cout << sizeof(snack) << endl;

    //6
    //    CandyBar snack[3] = {
    //            {"Mocha", 2.3, 350},
    //            {"Machi", 3.7, 420},
    //            {"Cake", 0.2, 1000}};
    //    cout << snack[0].brand << snack[0].weight << snack[0].calorie;
    //    cout << snack[1].brand << snack[1].weight << snack[1].calorie;
    //    cout << snack[2].brand << snack[2].weight << snack[2].calorie;\

    //7
    //LogPizzaInfo();

    //8
    //LogPizzaInfoDynamic();

    //9
    //    auto *snack = new CandyBar[3];
    //    snack[0].brand = "Mocha";
    //    snack[0].weight = 2.3;
    //    snack[0].calorie = 350;
    //
    //    (snack + 1)->brand = "Machi";
    //    (snack + 1)->weight = 3.7;
    //    (snack + 1)->calorie = 420;
    //
    //    (snack + 2)->brand = "Cake";
    //    (snack + 2)->weight = 0.2;
    //    (snack + 2)->calorie = 1000;
    //
    //    cout << snack[0].brand << snack[1].brand << snack[2].brand;
    //    cout << snack[0].weight << snack[1].weight << snack[2].weight;
    //    cout << snack[0].calorie << snack[1].calorie << snack[2].calorie;
    //
    //    delete[] snack;

    //10
    std::array<int, 3> score;
    cout << "First";
    cin >> score[0];
    cout << "Secont";
    cin >> score[1];
    cout << "Third";
    cin >> score[2];
    cout << "Average: " << ((score[0] + score[1] + score[2]) / 3.0);
}


void LogPizzaInfo() {
    using namespace std;
    PizzaAnalyze pizza;
    cout << "Enter your pizza name:";
    getline(cin, pizza.name);
    cout << "Enter your pizza length:";
    cin >> pizza.length;
    cout << "Enter your pizza weight:";
    cin >> pizza.weight;
    cout << pizza.name << pizza.length << pizza.weight;
}

void LogPizzaInfoDynamic() {
    using namespace std;
    auto *pizza = new PizzaAnalyze;
    cout << "Enter your pizza name:";
    getline(cin, pizza->name);
    cout << "Enter your pizza length:";
    cin >> pizza->length;
    cout << "Enter your pizza weight:";
    cin >> pizza->weight;
    cout << pizza->name << pizza->length << pizza->weight;
    delete pizza;
}