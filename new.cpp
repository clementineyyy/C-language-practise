//#define  _CRT_SECURE_NO_WARNINGS
//// use_new.cpp -- using the new operator
//#include <iostream>
//int main()
//{
//    using namespace std;
//    int nights = 1001;
//    //使用new的方法为未命名的区域分配值和地址
//    //使用了指针
//    //普通变量被存储在栈(内存区域)
//    //new把变量分配在堆
//    //注意delete函数和new配套使用，delete只能释放new分配的空间而指针仍然存在
//    //delete不能释放不指向new分配空间的地址(非new分配方法)
//    int* pt = new int;         // allocate space for an int
//    *pt = 1001;                 // store a value there
//
//    cout << "nights value = ";
//    cout << nights << ": location " << &nights << endl;
//    cout << "int ";
//    cout << "value = " << *pt << ": location = " << pt << endl;
//
//    double* pd = new double;   // allocate space for a double
//    *pd = 10000001.0;           // store a double there
//
//    cout << "double ";
//    cout << "value = " << *pd << ": location = " << pd << endl;
//    cout << "location of pointer pd: " << &pd << endl;
//    cout << "size of pt = " << sizeof(pt);
//    cout << ": size of *pt = " << sizeof(*pt) << endl;
//    cout << "size of pd = " << sizeof pd;
//    cout << ": size of *pd = " << sizeof(*pd) << endl;
//    // cin.get();
//    return 0;
//}