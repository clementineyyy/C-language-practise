#define  _CRT_SECURE_NO_WARNINGS
// stock10.h – Stock class declaration with constructors, destructor added
#ifndef STOCK1_H_
#define STOCK1_H_
#include <string>
class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    //因为两个构造函数的函数名相同但是参数列表不同所以函数重载了
    // 注意到构造函数的函数名就是类名
    //默认构造函数，没有返回值和实参，什么都没有的初始化操作,
    Stock();        // default constructor
    //显性构造函数，没有返回值，为类对象提供合理的初始化操作，注意形参不可以是类对象里面的数据成员
    //因为有构造函数所以不需要什么acquire()函数来初始化了
    Stock(const std::string& co, long n = 0, double pr = 0.0);
    //析构函数，没有返回值，清理不用的类对象，不需要客户手动调用
    //析构函数前面左上角有一个小波浪号，而且析构函数的函数名也是类名
    ~Stock();       // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif