//#define  _CRT_SECURE_NO_WARNINGS
//// firstref.cpp -- defining and using a reference
//#include <iostream>
//int main()
//{
//    using namespace std;
//    int rats = 101;
//    //�����&����ȡ��ַ��������ǽ�rodents����������Ϊint &
//    //�����������ͣ�����������ֵ�͵�ַ����ͬ
//    //���ұ�������������ʱ�����ñ������г�ʼ��
//    int& rodents = rats;   // rodents is a reference
//
//    cout << "rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//    rodents++;
//    cout << "rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//
//    // some implementations require type casting the following
//    // addresses to type unsigned
//    //�����&��ʾȡ��ַ�����
//    cout << "rats address = " << &rats;
//    cout << ", rodents address = " << &rodents << endl;
//    // cin.get();
//    return 0;
//}