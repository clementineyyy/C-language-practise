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
//    //����strlen()�ļ��㷽���Ǵ�����ĵ�һ��Ԫ�ؿ�ʼ�����ֽ���ֱ���������ַ�
//    //��δ����ʼ����char����ʹ��strlen(char)�����ַ���λ���������������ȿ��ܴ������鳤��
//    cout << "Length of string in charr before input: "
//        << strlen(charr) << endl;
//    //����str.size()��Ϊ��string���ͣ��Զ���ʼ����Ϊ0
//    cout << "Length of string in str before input: "
//        << str.size() << endl;
//    cout << "Enter a line of text:\n";
//    cin.getline(charr, 20);     // indicate maximum length
//    cout << "You entered: " << charr << endl;
//    cout << "Enter another line of text:\n";
//    //��cin��Ϊ����ʵ��ָ��������Ѱ�����룬string����ʵ���ַ��������Զ�������С
//    getline(cin, str);          // cin now an argument; no length specifier
//    //cin >> str;//��������ȱ���������ո��ֹͣ���գ�������ַ���ֻ����һ��
//    cout << "You entered: " << str << endl;
//    cout << "Length of string in charr after input: "
//        << strlen(charr) << endl;
//    cout << "Length of string in str after input: "
//        << str.size() << endl;
//    // cin.get();
//
//    return 0;
//}