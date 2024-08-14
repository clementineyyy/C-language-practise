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
//        //如果出现输入(字符)和被放入的变量(int类型数字)两者类型不同的情况
//        //第一种方法：使用cin.clear()函数重置输入，否则程序拒绝后面任何输入
//        //再用一个循环清空掉后面输入流中错误的输入信息
//        //第二种方法：不用cin.clear()函数，程序不再接受后面的输入，两种方法根据情况选择
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