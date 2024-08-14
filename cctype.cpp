//#define  _CRT_SECURE_NO_WARNINGS
//// cctypes.cpp -- using the ctype.h library
//#include <iostream>
//#include <cctype>              // prototypes for character functions
//int main()
//{
//    using namespace std;
//    cout << "Enter text for analysis, and type @"
//        " to terminate input.\n";
//    char ch;
//    int whitespace = 0;
//    int digits = 0;
//    int chars = 0;
//    int punct = 0;
//    int others = 0;
//
//    cin.get(ch);                // get first character
//    while (ch != '@')            // test for sentinel
//    {
//        //灵活使用cctype库中的函数减少不必要的额外程序书写
//        //isalpha()函数判断字符ch是不是字母
//        if (isalpha(ch))         // is it an alphabetic character?
//            chars++;
//        //isspace()函数判断字符ch是不是空格，换行符或者tab键
//        else if (isspace(ch))    // is it a whitespace character?
//            whitespace++;
//        //isdigit()函数判断字符ch是不是数字
//        else if (isdigit(ch))    // is it a digit?
//            digits++;
//        //ispunct()函数判断字符ch是不是标点符号
//        else if (ispunct(ch))    // is it punctuation?
//            punct++;
//        else
//            others++;
//        cin.get(ch);            // get next character
//    }
//    cout << chars << " letters, "
//        << whitespace << " whitespace, "
//        << digits << " digits, "
//        << punct << " punctuations, "
//        << others << " others.\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}