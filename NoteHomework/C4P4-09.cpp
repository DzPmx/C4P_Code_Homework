//
// Created by Dz on 24-5-8.
//
#include "cstring"
#include "iostream"
#include "string"

int main() {
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    ///////////////字符串赋值
    str1 = str2;
    strcpy_s(charr1, charr2);//字符数组赋值
    ///////////////字符串拼接
    str1 += "Paste";
    strcat_s(charr1, "juice");
    ///////////////判断长度
    unsigned long long length1 = str1.size();
    unsigned long long length2 = strlen(charr1);
    ///////////////输出
    cout << str1 << "/////" << length1 << endl;
    cout << charr1 << "/////" << length2 << endl;
}