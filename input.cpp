//#define  _CRT_SECURE_NO_WARNINGS
//// cingolf.cpp -- non-numeric input skipped
//#include <iostream>
//const int Max = 5;
//int main()
//{
//    using namespace std;
//    // get data
//    int golf[Max];
//    cout << "Please enter your golf scores.\n";
//    cout << "You must enter " << Max << " rounds.\n";
//    int i;
//    for (i = 0; i < Max; i++)
//    {
//        cout << "round #" << i + 1 << ": ";
//        //�����������(�ַ�)�ͱ�����ı���(int��������)�������Ͳ�ͬ�����
//        //��һ�ַ�����ʹ��cin.clear()�����������룬�������ܾ������κ�����
//        //����һ��ѭ����յ������������д����������Ϣ
//        //�ڶ��ַ���������cin.clear()�����������ٽ��ܺ�������룬���ַ����������ѡ��
//        while (!(cin >> golf[i])) {
//            cin.clear();     // reset input
//            while (cin.get() != '\n')
//                continue;    // get rid of bad input
//            cout << "Please enter a number: ";
//        }
//    }
//    // calculate average
//    double total = 0.0;
//    for (i = 0; i < Max; i++)
//        total += golf[i];
//    // report results
//    cout << total / Max << " = average score "
//        << Max << " rounds\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}