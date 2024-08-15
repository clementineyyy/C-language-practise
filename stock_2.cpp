#define  _CRT_SECURE_NO_WARNINGS
// stock00.cpp -- implementing the Stock class
// version 00
#include <iostream>
//要让编译器能够访问类定义，就要包含头文件，注意头文件拼写不要写错不然一堆报错
//由于是自定义的头文件所以两边不是尖括号而是双引号
#include "stock_1.h"

//函数定义的格式：
//返回值类型+函数所属类(Stock)+::(作用域解析运算符)+函数名+形参列表
void Stock::acquire(const std::string& co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        //可以访问类的私有成员(eg.company)而且前面不用加上类名和::
        std::cout << "Number of shares can't be negative; "
            << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
            << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
            << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
            << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    //下一句程序命令cout使用定点表示法输出而不是使用科学计数法
    std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    //下一句程序命令cout在使用定点表示法时显示3为小数
    std::streamsize prec = std::cout.precision(3);
    //但是这两句程序一经使用就会一直影响输出的格式，如果想恢复格式就需要在最后恢复
    
    //调用成员函数时，成员函数使用被调用的类的对象的数据成员
    //这明确了下面的这些类的数据成员到底是那个对象的
    std::cout << "Company: " << company
        << "  Shares: " << shares << '\n'
        << "  Share Price: $" << share_val
        << "  Total Worth: $" << total_val << '\n';

    //恢复原格式
    std::cout.setf(orig, std::ios_base::floatfield);
    std::cout.precision(prec);
}