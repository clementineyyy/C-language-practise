#define  _CRT_SECURE_NO_WARNINGS
// stock00.cpp -- implementing the Stock class
// version 00
#include <iostream>
//Ҫ�ñ������ܹ������ඨ�壬��Ҫ����ͷ�ļ���ע��ͷ�ļ�ƴд��Ҫд��Ȼһ�ѱ���
//�������Զ����ͷ�ļ��������߲��Ǽ����Ŷ���˫����
#include "stock_1.h"

//��������ĸ�ʽ��
//����ֵ����+����������(Stock)+::(��������������)+������+�β��б�
void Stock::acquire(const std::string& co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        //���Է������˽�г�Ա(eg.company)����ǰ�治�ü���������::
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
    //��һ���������coutʹ�ö����ʾ�����������ʹ�ÿ�ѧ������
    std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    //��һ���������cout��ʹ�ö����ʾ��ʱ��ʾ3ΪС��
    std::streamsize prec = std::cout.precision(3);
    //�������������һ��ʹ�þͻ�һֱӰ������ĸ�ʽ�������ָ���ʽ����Ҫ�����ָ�
    
    //���ó�Ա����ʱ����Ա����ʹ�ñ����õ���Ķ�������ݳ�Ա
    //����ȷ���������Щ������ݳ�Ա�������Ǹ������
    std::cout << "Company: " << company
        << "  Shares: " << shares << '\n'
        << "  Share Price: $" << share_val
        << "  Total Worth: $" << total_val << '\n';

    //�ָ�ԭ��ʽ
    std::cout.setf(orig, std::ios_base::floatfield);
    std::cout.precision(prec);
}