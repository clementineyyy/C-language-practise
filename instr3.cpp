//#define  _CRT_SECURE_NO_WARNINGS
//// instr3.cpp -- reading more than one word with get
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cout << "Enter your name:\n";
//    //����cin.getline��cin.get:cin.getline()���������з���cin.get()�������з�
//    //�������Ƕ���istream������ģ�ǰ����Ҫ���϶�����cin.
//    //��������Ҳ��ͬ��cin.get()�����в�ͬ�ĺ�������
//    cin.get(name, ArSize);  // reads through newline
//    cout << "Enter your favorite dessert:\n";
//    //��Ϊ�����˻��з����Եڶ��ε��ÿ����ĵ�һ���ַ����ǻ��з�
//    //�ڶ���������뻻�з�----��������----instr4�ṩ�������
//    cin.get(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//    // cin.get();
//    return 0;
//}