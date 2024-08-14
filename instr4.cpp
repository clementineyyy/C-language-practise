//#define  _CRT_SECURE_NO_WARNINGS
//// instr4.cpp -- reading more than one word with get
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cout << "Enter your name:\n";
//    cin.get(name, ArSize);  // reads through newline
//    //因为cin.get()保留换行符导致第二个数组读入换行符
//    //所以中间加一个不带参数的cin.get()接受这个换行符----instr5提供拼接函数的方法作为另一种解法
//    cin.get();
//    cout << "Enter your favorite dessert:\n";
//    cin.get(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//    // cin.get();
//    return 0;
//}