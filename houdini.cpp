//#define  _CRT_SECURE_NO_WARNINGS
//// bondini.cpp -- using escape sequences
//#include <iostream>
//int main()
//{
//    using namespace std;
//    cout << "\aOperation \"HyperHype\" is now activated!\n";
//    //这里打了多少个\b（退格从右向左）就有多少个小下划线出现在页面上
//    //一开始光标在下划线结尾往前数打的数量的\b的位置
//    // 随着客户在页面上输入字符，光标就会前进（从左向右）但是没有限制输入字符的个数
//    // 如果输入字符个数超出下划线那么程序出错
//    //同时字符串中也要出现相同数量的下划线_，否则光标初始位置不在下划线的起点处
//    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
//    long code;
//    cin >> code;
//    cout << "\aYou entered " << code << "...\n";
//    cout << "\aCode verified! Proceed with Plan Z3!\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}