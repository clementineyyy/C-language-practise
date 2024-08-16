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
        //��������󲢳�ʼ������ʽ���ù��캯����ע��������Բ���Ŷ���û�еȺ�
        //Ҳ����ʹ���б��ʼ�����������������Ǵ�����{}
        Stock stock1{ "NanoSmart", 12, 20.0 };            // syntax 1
        stock1.show();
        //ʹ����һ���﷨��������󲢳�ʼ������ʽ���ù��캯��
        Stock stock2 = Stock("Boffo Objects", 2, 2.0); // syntax 2
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        //���Խ�һ�����󸳸�ͬ���͵���һ������stock2ԭ���ݱ�����
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        //��Ϊstock1�Ѿ�������������ٴ�ʹ�ù��캯���������Ǹ��¶����ֵ
        //�������������Щ�µ���ֵ����һ���µ���ʱ�Ķ���Ȼ�����Щ��ֵ���Ƹ�stock1�ٵ�����������ɾ����ʱ�Ķ���
        stock1 = Stock("Nifty Foods", 10, 50.0);    // temp object
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
    //�ֲ�����stock1��stock2������ջ�У������󴴽��ı����ȱ�ɾ��
    //stock1�ȴ�����stock2�󴴽���ɾ�������������������ݸı��޹�
    
    //�����һ�Դ����ŵ������ǣ�
    //stock1��stock2���Զ��������ڳ����˳��䶨�������Ĵ����ʱ��ʧ
    // ���û�д����ţ���ômain()ִ����Ϻ�Ż����������������ʱ�����Ѿ��رգ��ǾͿ���������������������Ϣ��
    // ��Ӵ����ź���������������returnǰִ�У��ڴ�������ʾ��Ӧ��Ϣ
    // std::cin.get();
    return 0;
}