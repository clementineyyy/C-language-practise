//#define  _CRT_SECURE_NO_WARNINGS
//// instr3.cpp -- reading more than one word with get() & get()
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cout << "Enter your name:\n";
//    //把前两个cin.get()函数拼接在一起
//    //cin.get(name, ArSize).get();    // read string, newline
//    //或者同时把信息分别输入两个数组用以下拼接的方式
//    //cin.getline(name, ArSize).getline(dessert, ArSize);
//    //但是不能再往后拼接第三个函数了
//    cout << "Enter your favorite dessert:\n";
//    //cin.get(dessert, ArSize).get();
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//    // cin.get();
//    return 0;
//}