//#define  _CRT_SECURE_NO_WARNINGS
//// use_new.cpp -- using the new operator
//#include <iostream>
//int main()
//{
//    using namespace std;
//    int nights = 1001;
//    //ʹ��new�ķ���Ϊδ�������������ֵ�͵�ַ
//    //ʹ����ָ��
//    //��ͨ�������洢��ջ(�ڴ�����)
//    //new�ѱ��������ڶ�
//    //ע��delete������new����ʹ�ã�deleteֻ���ͷ�new����Ŀռ��ָ����Ȼ����
//    //delete�����ͷŲ�ָ��new����ռ�ĵ�ַ(��new���䷽��)
//    int* pt = new int;         // allocate space for an int
//    *pt = 1001;                 // store a value there
//
//    cout << "nights value = ";
//    cout << nights << ": location " << &nights << endl;
//    cout << "int ";
//    cout << "value = " << *pt << ": location = " << pt << endl;
//
//    double* pd = new double;   // allocate space for a double
//    *pd = 10000001.0;           // store a double there
//
//    cout << "double ";
//    cout << "value = " << *pd << ": location = " << pd << endl;
//    cout << "location of pointer pd: " << &pd << endl;
//    cout << "size of pt = " << sizeof(pt);
//    cout << ": size of *pt = " << sizeof(*pt) << endl;
//    cout << "size of pd = " << sizeof pd;
//    cout << ": size of *pd = " << sizeof(*pd) << endl;
//    // cin.get();
//    return 0;
//}