//#define  _CRT_SECURE_NO_WARNINGS
//// secref.cpp -- defining and using a reference
//#include <iostream>
//int main()
//{
//    using namespace std;
//    int rats = 101;
//    int& rodents = rats;   // rodents is a reference
//
//    cout << "rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//
//    cout << "rats address = " << &rats;
//    cout << ", rodents address = " << &rodents << endl;
//
//    int bunnies = 50;
//    //��������ñ���������Ϊ��һ�����������ã���ô����3��������ֵ����ͬ
//    //����һ��ʼ������������ַ��ͬ�����������������ǵĵ�ַ����ͬ
//    //��һ���Ч���ǰ�ǰ����������ֵ����Ϊ�˵�����������ֵ(��ֵ)
//    //���Ը�ֵ���������������������ñ���(�����Ըı����ñ������õĶ���)
//    rodents = bunnies;       // can we change the reference?
//    //��һ���ͬrats=bunnies
//    cout << "bunnies = " << bunnies;
//    cout << ", rats = " << rats;
//    cout << ", rodents = " << rodents << endl;
//
//    cout << "bunnies address = " << &bunnies;
//    cout << ", rodents address = " << &rodents << endl;
//    // cin.get();
//    return 0;
//}