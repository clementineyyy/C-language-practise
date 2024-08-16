#define  _CRT_SECURE_NO_WARNINGS
// stock10.h �C Stock class declaration with constructors, destructor added
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
    //��Ϊ�������캯���ĺ�������ͬ���ǲ����б�ͬ���Ժ���������
    // ע�⵽���캯���ĺ�������������
    //Ĭ�Ϲ��캯����û�з���ֵ��ʵ�Σ�ʲô��û�еĳ�ʼ������,
    Stock();        // default constructor
    //���Թ��캯����û�з���ֵ��Ϊ������ṩ����ĳ�ʼ��������ע���ββ��������������������ݳ�Ա
    //��Ϊ�й��캯�����Բ���Ҫʲôacquire()��������ʼ����
    Stock(const std::string& co, long n = 0, double pr = 0.0);
    //����������û�з���ֵ�������õ�����󣬲���Ҫ�ͻ��ֶ�����
    //��������ǰ�����Ͻ���һ��С���˺ţ��������������ĺ�����Ҳ������
    ~Stock();       // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif