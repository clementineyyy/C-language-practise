//#define  _CRT_SECURE_NO_WARNINGS
//// strtype4.cpp -- line input
//#include <iostream>
//#include <string>               // make string class available
//#include <cstring>              // C-style string library
//int main()
//{
//    using namespace std;
//    char charr[20];
//    string str;
//
//    //函数strlen()的计算方法是从数组的第一个元素开始计算字节数直到遇到空字符
//    //对未被初始化的char数组使用strlen(char)，空字符的位置随机所以输出长度可能大于数组长度
//    cout << "Length of string in charr before input: "
//        << strlen(charr) << endl;
//    //但是str.size()因为是string类型，自动初始长度为0
//    cout << "Length of string in str before input: "
//        << str.size() << endl;
//    cout << "Enter a line of text:\n";
//    cin.getline(charr, 20);     // indicate maximum length
//    cout << "You entered: " << charr << endl;
//    cout << "Enter another line of text:\n";
//    //将cin作为函数实参指出到哪里寻找输入，string根据实际字符串长度自动调整大小
//    getline(cin, str);          // cin now an argument; no length specifier
//    //cin >> str;//这样做有缺陷是遇到空格就停止接收，输入的字符串只截了一半
//    cout << "You entered: " << str << endl;
//    cout << "Length of string in charr after input: "
//        << strlen(charr) << endl;
//    cout << "Length of string in str after input: "
//        << str.size() << endl;
//    // cin.get();
//
//    return 0;
//}