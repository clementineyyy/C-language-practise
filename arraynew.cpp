//#define  _CRT_SECURE_NO_WARNINGS
//// arraynew.cpp -- using the new operator for arrays
//#include <iostream>
//int main()
//{
//    using namespace std;
//    //用new定义动态数组
//    double* p3 = new double[3]; // space for 3 doubles
//    p3[0] = 0.2;                  // treat p3 like an array name
//    p3[1] = 0.5;
//    p3[2] = 0.8;
//    cout << "p3[1] is " << p3[1] << ".\n";
//    //指针向右移一位，p3[0]指向p3[1]
//    //注意：指针变量加一后，增加的值1=指向的类型占用的字节数
//    p3 = p3 + 1;                  // increment the pointer
//    cout << "Now p3[0] is " << p3[0] << " and ";
//    cout << "p3[1] is " << p3[1] << ".\n";
//    //指针向左移一位，恢复原位
//    p3 = p3 - 1;                  // point back to beginning
//    //new对应delete,而且由于是动态数组所以要加上方括号[]在delete的前面
//    delete[] p3;                 // free the memory
//    // cin.get();
//    return 0;
//}