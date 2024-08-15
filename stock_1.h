#pragma once
// stock00.h -- Stock class interface
// version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>  

//C++关键字class表示定义了一个类，Stock就是类型名
//声明的Stock类型的变量就是对象或者实例(对象不是现在里面的这些变量)
//里面的这些是要存储的数据，以类数据成员的形式出现(1)
//还有要执行的操作，以类成员函数的形式出现(2)
//因此类成员可以是数据类型也可以是函数
class Stock  // class declaration
{
//关键字private表示对象的私有成员，实现了数据隐藏
//由于隐藏数据是面向对象的编程的主要目的之一
// 所以数据项通常放在私有部分，成员函数主要放在公有部分
//可以不加上private，系统默认不加就是private
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    //类成员函数可以就地定义，类成员函数也可以放在私有部分中
    //该函数的作用是重新设置total_val私有成员值，在函数定义文件中被每一个函数都调用了一次
    //这个函数只有编写类的人能用，调用类的人却不能用，只能用公有函数
    //定义(注意是定义而不是原型)位于类声明中的函数都自动成为内联函数，所以set_tot()是内联函数
    void set_tot() { total_val = shares * share_val; }
//关键字public表示类的公有部分/公有成员
//使用类对象的程序可以直接访问公有部分但是不可以直接访问私有成员
//只能通过公有成员函数才能访问私有成员
public:
    //类成员函数也可以用原型表示
    //下面这些就不是内联函数，因为函数定义不再类声明里
    void acquire(const std::string& co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};    // note semicolon at the end

#endif
//也可以在类声明class外面定义内联函数，但是前面要加上inline