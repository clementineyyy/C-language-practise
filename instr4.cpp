//#define  _CRT_SECURE_NO_WARNINGS
//// instr4.cpp -- reading more than one word with get
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cout << "Enter your name:\n";
//    cin.get(name, ArSize);  // reads through newline
//    //��Ϊcin.get()�������з����µڶ���������뻻�з�
//    //�����м��һ������������cin.get()����������з�----instr5�ṩƴ�Ӻ����ķ�����Ϊ��һ�ֽⷨ
//    cin.get();
//    cout << "Enter your favorite dessert:\n";
//    cin.get(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//    // cin.get();
//    return 0;
//}