//#define  _CRT_SECURE_NO_WARNINGS
//// str1.cpp -- introducing the string class
//#include <iostream>
////��stringҪ����ͷ�ļ���ע�⵽û��.h
//#include <string>
//// using string constructors
//
//int main()
//{
//    using namespace std;
//    //��һ�ֳ�ʼ��string�ķ�����Բ����()��������ַ���
//    string one("Lottery Winner!");     // ctor #1
//    cout << one << endl;               // overloaded <<
//    //�ڶ��ֳ�ʼ��string�ķ�����Բ����()�����һ���������ַ������ȣ��ڶ����������ַ�����
//    string two(20, '$');               // ctor #2
//    cout << two << endl;
//    //�����ֳ�ʼ��string�ķ��������ƹ��캯�����µ�string�����ʼ��Ϊ���string����
//    string three(one);                 // ctor #3
//    cout << three << endl;
//    //ʹ�������������+=���µ��ַ����ӵ�ǰһ���ַ����ĺ���
//    one += " Oops!";                   // overloaded +=
//    cout << one << endl;
//    two = "Sorry! That was ";
//    three[0] = 'P';
//    string four;                       // ctor #4
//    //���������=����ֵ�ַ���
//    four = two + three;                // overloaded +, =
//    cout << four << endl;
//    char alls[] = "All's well that ends well";
//    //�����ֳ�ʼ��string�ķ�������һ���������ַ������ڶ���������ʾҪ���ַ������渴�ƶ��ٸ��ַ���string
//    string five(alls, 20);              // ctor #5
//    cout << five << "!\n";
//    //�����ֳ�ʼ��string�ķ���������begin��endָ��/��������ʵ���϶Ե�ַ���в���
//    //[begin,end),����endָ��ʹ�õ����һ��ֵ�ĺ���һ��λ��
//    //����ע����������ַ���alls������string����five
//    string six(alls + 6, alls + 10);     // ctor #6
//    cout << six << ", ";
//    //�����ֳ�ʼ��string�ķ�������������begin��end��������
//    //ע�������string������Ҫ����&���Ų��ǵ�ַ�����ҿ�����������Ԫ�ر�ʾ����
//    string seven(&five[6], &five[10]); // ctor #6 again
//    cout << seven << "...\n";
//    //�����ֳ�ʼ��string�ķ�������һ��������string���󣬵ڶ��������ǵڼ����ַ���ʼ�������������Ǹ��ƶ��ٸ��ַ����µ�string
//    string eight(four, 7, 16);         // ctor #7
//    cout << eight << " in motion!" << endl;
//    // std::cin.get();
//    return 0;
//}