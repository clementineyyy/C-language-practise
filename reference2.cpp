//#define  _CRT_SECURE_NO_WARNINGS
//// secref.cpp -- defining and using a reference
//#include <iostream>
//int main()
//{
//    using namespace std;
//    int rats = 101;
//    int& rodents = rats;   // rodents is a reference
//
//    cout << "rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//
//    cout << "rats address = " << &rats;
//    cout << ", rodents address = " << &rodents << endl;
//
//    int bunnies = 50;
//    //如果把引用变量后来作为另一个变量的引用，那么现在3个变量的值都相同
//    //但是一开始的两个变量地址相同而第三个变量和他们的地址都不同
//    //这一句的效果是把前两个变量的值都改为了第三个变量的值(赋值)
//    //所以赋值操作不可以重新设置引用变量(不可以改变引用变量引用的对象)
//    rodents = bunnies;       // can we change the reference?
//    //上一句等同rats=bunnies
//    cout << "bunnies = " << bunnies;
//    cout << ", rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//
//    cout << "bunnies address = " << &bunnies;
//    cout << ", rodents address = " << &rodents << endl;
//    // cin.get();
//    return 0;
//}