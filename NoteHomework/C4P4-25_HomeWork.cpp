//
// Created by Dz on 24-5-9.
//
#include "array"
#include "iostream"
#include "string"
#include "vector"
int main() {
    using namespace std;
    ////复习题

    //1
    //    char actor[30];
    //    short betise[100];
    //    float chuck[13];
    //    long double dipsea[64];

    //2
    array<char, 30> actor;
    array<short, 100> betise;
    array<float, 13> chuck;
    array<long double, 64> dipsea;

    //3
    int val[5] = {1, 3, 5, 7, 9};
    int val2 = val[0] + val[4];
    //4
    cout << val2 << endl;

    //5
    float idea[5]{};
    cout << idea[1] << endl;

    //6
    char ch[20] = "cheeseburger";

    //7
    string str = "Waldorf Salad";

    //8
    struct Fish {
        char type[15];
        int ounce;
        float lenght;
    };
    //9
    Fish myfish = {
            "Redfish", 8, 1.8f};
    //10
    enum Response {
        No,
        Yes,
        Maybe
    };

    //11
    double ted;
    double *pt = &ted;
    //12
    float treacle[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float *p_treacle = treacle;
    cout << p_treacle[0] << endl;    //way1
    cout << *(p_treacle + 9) << endl;//way2
    //13
    unsigned int length;
    (cin >> length).get();
    int *arr = new int[length];
    delete[] arr;
    //13
    vector<int> arr2(length);
    //14
    cout << (int *) "Home of the jolly bytes";
    //16 cin输入时，默认遇到换行符制表符会结束输入，留下换行符，导致只能输入一个单词 第二次输入时程序直接结束
    char abc[20];
    cin.getline(abc, 80);
    //17
    const int num = 10;
    std::vector<string> strVec(num);
    std::array<string, 10> strArr;
}