//#define  _CRT_SECURE_NO_WARNINGS
//// instr2.cpp -- reading more than one word with getline
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cout << "Enter your name:\n";
//    //用cin.getline()类成员函数每次读取一行，读到回车键停止
//    // 不保留（舍弃）换行符，换行符被替换为\0
//    //实参1是放入的数组的名称，实参2是读取的最大字符数
//    cin.getline(name, ArSize);  // reads through newline
//    cout << "Enter your favorite dessert:\n";
//    cin.getline(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//    // cin.get();
//    return 0;
//}