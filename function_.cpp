//#define  _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//using namespace std;
//
////这样传递数组参数改变了数组前后的元素大小！！！
//void remove_1(int a[])
//{
//	for (int i = 0; i < 5; i++)
//		a[i] = i;
//}
//
//void remove_2(const int a[])
//{
//	//如果在形参中定义数组是const，说明数组是常量数据，所以不可以在函数中修改数组的值
//	//如果修改了数组的值就会报错，这样来保证数组的值在调用函数前后不会改变
//	for (int i = 0; i < 5; i++)
//		a[i] = i;
//}
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	remove_1(a);
//	for (int i = 0; i < 5; i++)
//		cout << a[i];
//}