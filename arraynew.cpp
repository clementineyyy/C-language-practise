//#define  _CRT_SECURE_NO_WARNINGS
//// arraynew.cpp -- using the new operator for arrays
//#include <iostream>
//int main()
//{
//    using namespace std;
//    //��new���嶯̬����
//    double* p3 = new double[3]; // space for 3 doubles
//    p3[0] = 0.2;                  // treat p3 like an array name
//    p3[1] = 0.5;
//    p3[2] = 0.8;
//    cout << "p3[1] is " << p3[1] << ".\n";
//    //ָ��������һλ��p3[0]ָ��p3[1]
//    //ע�⣺ָ�������һ�����ӵ�ֵ1=ָ�������ռ�õ��ֽ���
//    p3 = p3 + 1;                  // increment the pointer
//    cout << "Now p3[0] is " << p3[0] << " and ";
//    cout << "p3[1] is " << p3[1] << ".\n";
//    //ָ��������һλ���ָ�ԭλ
//    p3 = p3 - 1;                  // point back to beginning
//    //new��Ӧdelete,���������Ƕ�̬��������Ҫ���Ϸ�����[]��delete��ǰ��
//    delete[] p3;                 // free the memory
//    // cin.get();
//    return 0;
//}