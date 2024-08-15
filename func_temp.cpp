//#define  _CRT_SECURE_NO_WARNINGS
//// funtemp.cpp -- using a function template
//#include <iostream>
//// function template prototype
//template <typename T>  // or class T
//void Swap(T& a, T& b);
//
//int main()
//{
//    using namespace std;
//    int i = 10;
//    int j = 20;
//    cout << "i, j = " << i << ", " << j << ".\n";
//    cout << "Using compiler-generated int swapper:\n";
//    Swap(i, j);  // generates void Swap(int &, int &)
//    cout << "Now i, j = " << i << ", " << j << ".\n";
//
//    double x = 24.5;
//    double y = 81.7;
//    cout << "x, y = " << x << ", " << y << ".\n";
//    cout << "Using compiler-generated double swapper:\n";
//    Swap(x, y);  // generates void Swap(double &, double &)
//    cout << "Now x, y = " << x << ", " << y << ".\n";
//    // cin.get();
//    return 0;
//}
//
//// function template definition
////这里使用了函数模板，下面是函数模板的书写格式
////前面有template后面是尖括号<>里面是typename或者class,T表示下面可替换的类型名
////T随着函数调用中实参类型的不同而改变----所以才叫函数模板
//template <typename T>  // or class T
//void Swap(T& a, T& b)
//{
//    T temp;   // temp a variable of type T
//    temp = a;
//    a = b;
//    b = temp;
//}