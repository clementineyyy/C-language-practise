//#define  _CRT_SECURE_NO_WARNINGS
//// str1.cpp -- introducing the string class
//#include <iostream>
////用string要包含头文件，注意到没有.h
//#include <string>
//// using string constructors
//
//int main()
//{
//    using namespace std;
//    //第一种初始化string的方法：圆括号()里面加上字符串
//    string one("Lottery Winner!");     // ctor #1
//    cout << one << endl;               // overloaded <<
//    //第二种初始化string的方法：圆括号()里面第一个参数是字符串长度，第二个参数是字符内容
//    string two(20, '$');               // ctor #2
//    cout << two << endl;
//    //第三种初始化string的方法：复制构造函数，新的string对象初始化为别的string对象
//    string three(one);                 // ctor #3
//    cout << three << endl;
//    //使用了重载运算符+=把新的字符串加到前一个字符串的后面
//    one += " Oops!";                   // overloaded +=
//    cout << one << endl;
//    two = "Sorry! That was ";
//    three[0] = 'P';
//    string four;                       // ctor #4
//    //重载运算符=，赋值字符串
//    four = two + three;                // overloaded +, =
//    cout << four << endl;
//    char alls[] = "All's well that ends well";
//    //第四种初始化string的方法：第一个参数是字符串，第二个参数表示要从字符串里面复制多少个字符给string
//    string five(alls, 20);              // ctor #5
//    cout << five << "!\n";
//    //第五种初始化string的方法：利用begin和end指针/迭代器，实际上对地址进行操作
//    //[begin,end),所以end指向被使用的最后一个值的后面一个位置
//    //而且注意操作的是字符串alls而不是string对象five
//    string six(alls + 6, alls + 10);     // ctor #6
//    cout << six << ", ";
//    //第六种初始化string的方法：还是利用begin和end迭代器，
//    //注意可以用string对象但是要加上&符号才是地址，而且可以是类数组元素表示方法
//    string seven(&five[6], &five[10]); // ctor #6 again
//    cout << seven << "...\n";
//    //第七种初始化string的方法：第一个参数是string对象，第二个参数是第几个字符开始，第三个参数是复制多少个字符给新的string
//    string eight(four, 7, 16);         // ctor #7
//    cout << eight << " in motion!" << endl;
//    // std::cin.get();
//    return 0;
//}