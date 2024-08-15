#define  _CRT_SECURE_NO_WARNINGS
// usestok0.cpp -- the client program
// compile with stock.cpp
#include <iostream>
//为了使用类同样要包括类的头文件
#include "stock_1.h"

int main()
{
    Stock fluffy_the_cat;
    //注意这里类的对象调用函数都是用.调用
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show();
    // std::cin.get();
    return 0;
}