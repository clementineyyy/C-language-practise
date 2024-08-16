#define  _CRT_SECURE_NO_WARNINGS
// usestok1.cpp -- using the Stock class
// compile with stock10.cpp
#include <iostream>
#include "stock_up.h"

int main()
{
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        //创建类对象并初始化，显式调用构造函数，注意两边是圆括号而且没有等号
        //也可以使用列表初始化像数组那样两边是大括号{}
        Stock stock1{ "NanoSmart", 12, 20.0 };            // syntax 1
        stock1.show();
        //使用另一种语法创建类对象并初始化，显式调用构造函数
        Stock stock2 = Stock("Boffo Objects", 2, 2.0); // syntax 2
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        //可以将一个对象赋给同类型的另一个对象，stock2原内容被覆盖
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        //因为stock1已经被定义过所以再次使用构造函数的作用是更新对象的值
        //构造程序先用这些新的数值创造一个新的临时的对象，然后把这些数值复制给stock1再调用析构函数删除临时的对象
        stock1 = Stock("Nifty Foods", 10, 50.0);    // temp object
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
    //局部变量stock1和stock2被放在栈中，因此最后创建的变量先被删除
    //stock1先创建，stock2后创建，删除操作与对象里面的内容改变无关
    
    //额外的一对大括号的作用是：
    //stock1和stock2等自动变量将在程序退出其定义所属的代码块时消失
    // 如果没有大括号，那么main()执行完毕后才会调用析构函数，此时窗口已经关闭，那就看不到析构函数传出的信息了
    // 添加大括号后，析构函数可以在return前执行，在窗口上显示相应信息
    // std::cin.get();
    return 0;
}