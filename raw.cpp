//#define  _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//新增类型原始字符串raw，无需使用转义字符，转义字符表示的就是自己
//	//输出有前缀R,而且两边必须被双引号和括号围起来"()"
//	cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl;
//	cout << "Jim \"King\" Tutt uses \"\\n\" instead of endl." << endl;
//	//在表示raw字符的每一边的双引号和括号之间可以加入别的符号，注意两边的其他符号不是对称而是相同顺序
//	//防止在字符串内也要输入双引号和括号使编译器产生困扰
//	cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;
//
//}