//#define  _CRT_SECURE_NO_WARNINGS
//// morechar.cpp -- the char type and int type contrasted
//#include <iostream>
//int main()
//{
//    using namespace std;
//    char ch = 'M';       // assign ASCII code for M to ch
//    int i = ch;          // store same code in an int
//    cout << "The ASCII code for " << ch << " is " << i << endl;
//
//    cout << "Add one to the character code:" << endl;
//    ch = ch + 1;          // change character code in ch
//    i = ch;               // save new character code in i
//    cout << "The ASCII code for " << ch << " is " << i << endl;
//
//    // using the cout.put() member function to display a char
//    cout << "Displaying char ch using cout.put(ch): ";
//    //cout.put()是类的成员函数，显示一个字符
//    // 这个成员函数只能通过类的特定对象（此处是cout）来调用
//    // 对象名cout+.+函数名put()
//    //cout << ch;
//    cout.put(ch);
//
//    // using cout.put() to display a char constant
//    //cout << '!';
//    cout.put('!');
//
//    cout << endl << "Done" << endl;
//    // cin.get();
//    return 0;
//}