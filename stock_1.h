#pragma once
// stock00.h -- Stock class interface
// version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>  

//C++�ؼ���class��ʾ������һ���࣬Stock����������
//������Stock���͵ı������Ƕ������ʵ��(�����������������Щ����)
//�������Щ��Ҫ�洢�����ݣ��������ݳ�Ա����ʽ����(1)
//����Ҫִ�еĲ����������Ա��������ʽ����(2)
//������Ա��������������Ҳ�����Ǻ���
class Stock  // class declaration
{
//�ؼ���private��ʾ�����˽�г�Ա��ʵ������������
//���������������������ı�̵���ҪĿ��֮һ
// ����������ͨ������˽�в��֣���Ա������Ҫ���ڹ��в���
//���Բ�����private��ϵͳĬ�ϲ��Ӿ���private
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    //���Ա�������Ծ͵ض��壬���Ա����Ҳ���Է���˽�в�����
    //�ú�������������������total_val˽�г�Աֵ���ں��������ļ��б�ÿһ��������������һ��
    //�������ֻ�б�д��������ã����������ȴ�����ã�ֻ���ù��к���
    //����(ע���Ƕ��������ԭ��)λ���������еĺ������Զ���Ϊ��������������set_tot()����������
    void set_tot() { total_val = shares * share_val; }
//�ؼ���public��ʾ��Ĺ��в���/���г�Ա
//ʹ�������ĳ������ֱ�ӷ��ʹ��в��ֵ��ǲ�����ֱ�ӷ���˽�г�Ա
//ֻ��ͨ�����г�Ա�������ܷ���˽�г�Ա
public:
    //���Ա����Ҳ������ԭ�ͱ�ʾ
    //������Щ�Ͳ���������������Ϊ�������岻����������
    void acquire(const std::string& co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};    // note semicolon at the end

#endif
//Ҳ������������class���涨����������������ǰ��Ҫ����inline