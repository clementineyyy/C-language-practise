//#define  _CRT_SECURE_NO_WARNINGS
//// strtype2.cpp �C- assigning, adding, and appending
//#include <iostream>
////��������stringͷ�ļ�Ҳ��������
////#include <string>               // make string class available
//int main()
//{
//    using namespace std;
//    string s1 = "penguin";
//    string s2, s3;
//
//    cout << "You can assign one string object to another: s2 = s1\n";
//    //��string���Ϳ�������string֮�丳ֵ����char�������;Ͳ���
//    s2 = s1;
//    cout << "s1: " << s1 << ", s2: " << s2 << endl;
//    cout << "You can assign a C-style string to a string object.\n";
//    cout << "s2 = \"buzzard\"\n";
//    //����ֱ�Ӹ�string�����ַ���(��˫����Χ����)
//    s2 = "buzzard";
//    cout << "s2: " << s2 << endl;
//    cout << "You can concatenate strings: s3 = s1 + s2\n";
//    //�����ַ������Ӻ���ֱ��ʹ�üӷ�������string��������(�м��޿ո�)
//    s3 = s1 + s2;
//    cout << "s3: " << s3 << endl;
//    cout << "You can append strings.\n";
//    //ֱ�Ӱ�string s2������string s1�ĺ���
//    s1 += s2;
//    cout << "s1 += s2 yields s1 = " << s1 << endl;
//    s2 += " for a day";
//    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
//
//    //cin.get();
//    return 0;
//}