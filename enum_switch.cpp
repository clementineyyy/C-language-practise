//#define  _CRT_SECURE_NO_WARNINGS
//// enum.cpp -- using enum
//#include <iostream>
//// create named constants for 0 - 6
////将枚举类型用于switch语句中解决case不是字符或者数字的复杂特殊情况
////枚举类型将字符串视为数字
//enum { red, orange, yellow, green, blue, violet, indigo };
//
//int main()
//{
//    using namespace std;
//    cout << "Enter color code (0-6): ";
//    int code;
//    cin >> code;
//    while (code >= red && code <= indigo)
//    {
//        switch (code)
//        {
//        //下面可以利用枚举类型把case的序号改为enum中的元素
//        case red: cout << "Her lips were red.\n"; break;
//        case orange: cout << "Her hair was orange.\n"; break;
//        case yellow: cout << "Her shoes were yellow.\n"; break;
//        case green: cout << "Her nails were green.\n"; break;
//        case blue: cout << "Her sweatsuit was blue.\n"; break;
//        case violet: cout << "Her eyes were violet.\n"; break;
//        case indigo: cout << "Her mood was indigo.\n"; break;
//        }
//        cout << "Enter color code (0-6): ";
//        cin >> code;
//    }
//    cout << "Bye\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}