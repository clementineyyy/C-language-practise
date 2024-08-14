//#define  _CRT_SECURE_NO_WARNINGS
//// numstr.cpp -- following number input with line input
//#include <iostream>
//int main()
//{
//    using namespace std;
//    char ch;
//    cout << "What year was your house built?\n";
//    int year;
//    cin >> year;
//    cin.get();
//    // 或者cin.get(ch);
//    // 或者(cin>>year).get();
//    // 或者(cin>>year).get(ch);
//    //这样的话address数组是空因为输入year数字后换行符被留在输入队列中
//    //cin.getline()看到留下的换行符就接收它
//    //解决办法是用上面注释掉的cin.get()接收换行符
//    cout << "What is its street address?\n";
//    char address[80];
//    cin.getline(address, 80);
//    cout << "Year built: " << year << endl;
//    cout << "Address: " << address << endl;
//    cout << "Done!\n";
//    // cin.get();
//    return 0;
//}