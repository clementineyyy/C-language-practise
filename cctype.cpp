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
//        //���ʹ��cctype���еĺ������ٲ���Ҫ�Ķ��������д
//        //isalpha()�����ж��ַ�ch�ǲ�����ĸ
//        if (isalpha(ch))         // is it an alphabetic character?
//            chars++;
//        //isspace()�����ж��ַ�ch�ǲ��ǿո񣬻��з�����tab��
//        else if (isspace(ch))    // is it a whitespace character?
//            whitespace++;
//        //isdigit()�����ж��ַ�ch�ǲ�������
//        else if (isdigit(ch))    // is it a digit?
//            digits++;
//        //ispunct()�����ж��ַ�ch�ǲ��Ǳ�����
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