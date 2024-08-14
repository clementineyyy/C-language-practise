//#define  _CRT_SECURE_NO_WARNINGS
//
//// textin1.cpp -- reading chars with a while loop
//#include <iostream>
//int main()
//{
//    using namespace std;
//    char ch;
//    int count = 0;      // use basic input
//    cout << "Enter characters; enter # to quit:\n";
//    //cin自动忽略空格和换行符
//    //用户可以一口气输入很多字符(包括空格)然后cin自己在输入流中选取字符ch
//    //也可以一个一个输入字符喂到ch中
//    //而且cin的输入是缓冲的：只有按下换行符，输入的字符才会发送给程序
//    //cin >> ch;          // get a character
//    //或者使用下面这个类函数得到每一个字符(包括空格)
//    cin.get(ch);
//    while (cin)   //或者像这样直接写cin，输入成功为true失败为false
//    //或者写成int类型ch!=EOF标记(EOF是-1)，注意此时ch是int类型而不是char类型
//    //进一步改进：如果结束的条件不是遇到#符号----用EOF来判断,
//    //键盘上的ctrl+Z+enter是模拟的EOF，检测到EOF后，eofbit和failbit被设置为1
//    //cin.fail()==false
//    {
//        cout.put(ch);     // echo the character
//        //cin.get(ch)同理cout.put(ch)
//        ++count;        // count the character
//        //cin >> ch;      // get the next character
//        //或者ch=cin.get()
//        cin.get(ch);
//    }
//    cout << endl << count << " characters read\n";
//    // get rid of rest of line
//         // while (cin.get() != '\n')
//            // ;
//    //cin.get();
//    return 0;
//}