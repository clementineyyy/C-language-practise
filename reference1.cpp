//#define  _CRT_SECURE_NO_WARNINGS
//// firstref.cpp -- defining and using a reference
//#include <iostream>
//int main()
//{
//    using namespace std;
//    int rats = 101;
//    //这里的&不是取地址运算符而是将rodents的类型声明为int &
//    //这是引用类型，两个变量的值和地址都相同
//    //而且必须在声明引用时对引用变量进行初始化
//    int& rodents = rats;   // rodents is a reference
//
//    cout << "rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//    rodents++;
//    cout << "rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//
//    // some implementations require type casting the following
//    // addresses to type unsigned
//    //下面的&表示取地址运算符
//    cout << "rats address = " << &rats;
//    cout << ", rodents address = " << &rodents << endl;
//    // cin.get();
//    return 0;
//}