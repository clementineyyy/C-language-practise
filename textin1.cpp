//#define  _CRT_SECURE_NO_WARNINGS
//
//// textin1.cpp -- reading chars with a while loop
//#include <iostream>
//int main()
//{
//    using namespace std;
//    char ch;
//    int count = 0;      // use basic input
//    cout << "Enter characters; enter # to quit:\n";
//    //cin�Զ����Կո�ͻ��з�
//    //�û�����һ��������ܶ��ַ�(�����ո�)Ȼ��cin�Լ�����������ѡȡ�ַ�ch
//    //Ҳ����һ��һ�������ַ�ι��ch��
//    //����cin�������ǻ���ģ�ֻ�а��»��з���������ַ��Żᷢ�͸�����
//    //cin >> ch;          // get a character
//    //����ʹ����������ຯ���õ�ÿһ���ַ�(�����ո�)
//    cin.get(ch);
//    while (cin)   //����������ֱ��дcin������ɹ�Ϊtrueʧ��Ϊfalse
//    //����д��int����ch!=EOF���(EOF��-1)��ע���ʱch��int���Ͷ�����char����
//    //��һ���Ľ������������������������#����----��EOF���ж�,
//    //�����ϵ�ctrl+Z+enter��ģ���EOF����⵽EOF��eofbit��failbit������Ϊ1
//    //cin.fail()==false
//    {
//        cout.put(ch);     // echo the character
//        //cin.get(ch)ͬ��cout.put(ch)
//        ++count;        // count the character
//        //cin >> ch;      // get the next character
//        //����ch=cin.get()
//        cin.get(ch);
//    }
//    cout << endl << count << " characters read\n";
//    // get rid of rest of line
//         // while (cin.get() != '\n')
//            // ;
//    //cin.get();
//    return 0;
//}