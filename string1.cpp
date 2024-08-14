//#define  _CRT_SECURE_NO_WARNINGS
//// strtype2.cpp –- assigning, adding, and appending
//#include <iostream>
////这里无需string头文件也可以运行
////#include <string>               // make string class available
//int main()
//{
//    using namespace std;
//    string s1 = "penguin";
//    string s2, s3;
//
//    cout << "You can assign one string object to another: s2 = s1\n";
//    //对string类型可以两个string之间赋值但是char数组类型就不行
//    s2 = s1;
//    cout << "s1: " << s1 << ", s2: " << s2 << endl;
//    cout << "You can assign a C-style string to a string object.\n";
//    cout << "s2 = \"buzzard\"\n";
//    //可以直接给string分配字符串(用双引号围起来)
//    s2 = "buzzard";
//    cout << "s2: " << s2 << endl;
//    cout << "You can concatenate strings: s3 = s1 + s2\n";
//    //无需字符串链接函数直接使用加法将两个string链接起来(中间无空格)
//    s3 = s1 + s2;
//    cout << "s3: " << s3 << endl;
//    cout << "You can append strings.\n";
//    //直接把string s2链接在string s1的后面
//    s1 += s2;
//    cout << "s1 += s2 yields s1 = " << s1 << endl;
//    s2 += " for a day";
//    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
//
//    //cin.get();
//    return 0;
//}