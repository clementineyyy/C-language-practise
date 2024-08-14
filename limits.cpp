//#define  _CRT_SECURE_NO_WARNINGS
//
//// limits.cpp -- some integer limits
//#include <iostream>
//#include <climits>              // use limits.h for older systems
//int main()
//{
//    using namespace std;
//    int n_int = INT_MAX;        // initialize n_int to max int value
//    short n_short = SHRT_MAX;   // symbols defined in climits file
//    long n_long = LONG_MAX;
//    long long n_llong = LLONG_MAX;
//
//    // sizeof operator yields size of type or of variable
//    //对类型名int使用sizeof运算符时将类型名放在括号中而且之间没有空格
//    cout << "int is " << sizeof(int) << " bytes." << endl;
//    //对变量名n_short使用sizeof运算符时不需要括号
//    cout << "short is " << sizeof n_short << " bytes." << endl;
//    cout << "long is " << sizeof n_long << " bytes." << endl;
//    cout << "long long is " << sizeof n_llong << " bytes." << endl;
//    cout << endl;
//
//    cout << "Maximum values:" << endl;
//    cout << "int: " << n_int << endl;
//    cout << "short: " << n_short << endl;
//    cout << "long: " << n_long << endl;
//    cout << "long long: " << n_llong << endl << endl;
//
//    cout << "Minimum int value = " << INT_MIN << endl;
//    cout << "Bits per byte = " << CHAR_BIT << endl;
//    // cin.get();
//    return 0;
//}
