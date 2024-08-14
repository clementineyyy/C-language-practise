//#define  _CRT_SECURE_NO_WARNINGS
//// instr3.cpp -- reading more than one word with get
//#include <iostream>
//int main()
//{
//    using namespace std;
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cout << "Enter your name:\n";
//    //区分cin.getline和cin.get:cin.getline()不保留换行符而cin.get()保留换行符
//    //但是它们都是istream类里面的，前面需要加上对象名cin.
//    //函数参数也相同，cin.get()可以有不同的函数变体
//    cin.get(name, ArSize);  // reads through newline
//    cout << "Enter your favorite dessert:\n";
//    //因为保留了换行符所以第二次调用看到的第一个字符就是换行符
//    //第二个数组存入换行符----非理想结果----instr4提供解决方案
//    cin.get(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//    // cin.get();
//    return 0;
//}