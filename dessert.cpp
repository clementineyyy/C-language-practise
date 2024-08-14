//#define  _CRT_SECURE_NO_WARNINGS
//// instr1.cpp -- reading more than one string
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cout << "Enter your name:\n";
//    //cin输入字符串的缺陷：遇到空格就停止输入，不接受空格后的内容
//    // cin是面向单词的输入
//    //这样空格前的字符被放入第一个数组name,空格后的字符被放入第二个数组dessert
//    cin >> name;
//    cout << "Enter your favorite dessert:\n";
//    cin >> dessert;
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}