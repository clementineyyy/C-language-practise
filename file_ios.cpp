//#define  _CRT_SECURE_NO_WARNINGS
////filefunc.cpp -- function with ostream & parameter
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//
//void file_it(ostream& os, double fo, const double fe[], int n);
//const int LIMIT = 5;
//int main()
//{
//    ofstream fout;
//    const char* fn = "ep-data.txt";
//    fout.open(fn);
//    if (!fout.is_open())
//    {
//        cout << "Can't open " << fn << ". Bye.\n";
//        exit(EXIT_FAILURE);
//    }
//    double objective;
//    cout << "Enter the focal length of your "
//        "telescope objective in mm: ";
//    cin >> objective;
//    double eps[LIMIT];
//    cout << "Enter the focal lengths, in mm, of " << LIMIT
//        << " eyepieces:\n";
//    for (int i = 0; i < LIMIT; i++)
//    {
//        cout << "Eyepiece #" << i + 1 << ": ";
//        cin >> eps[i];
//    }
//    //������д���ļ�
//    file_it(fout, objective, eps, LIMIT);
//    //��Ϣ��ʾ����Ļ��
//    file_it(cout, objective, eps, LIMIT);
//    cout << "Done\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}
//
////ͨ��main������ĺ�������ֱ��ostream��ofstream�����ʵ�ζ����Դ��ݸ�ostream�����������͵��β�
//void file_it(ostream& os, double fo, const double fe[], int n)
//{
//    // save initial formatting state
//    //ios_base::fmtflags�Ǵ洢��ʽ��������Щ��Ϣ�����������������
//    ios_base::fmtflags initial;
//    //����setf()�������ø��ָ�ʽ��״̬��������Щ���ö����ֲ���ֱ���ٴε�����ͬ�ķ�����������
//    //setf(ios_base::fixed),
//    // setf(ios_base::showpoint)������������ʾС�����ģʽ
//    //setf()���ص�����֮ǰ��Ч�����и�ʽ������
//
//    initial = os.setf(ios_base::fixed, ios_base::floatfield);
//    //precision()ָ����ʾ����λС��
//    std::streamsize sz = os.precision(0);
//    os << "Focal length of objective: " << fo << " mm\n";
//    os.precision(1);
//    //width()������һ���������ʹ�õ��ֶο�ȣ���������ֻ����ʾ��һ��ֵʱ��Ч��Ȼ�󽫻ָ���Ĭ������
//    //Ĭ�ϵ��ֶο��Ϊ0��ʾ�պ���������Ҫ��ʾ������
//    os.width(12);
//    os << "f.l. eyepiece";
//    os.width(15);
//    os << "magnification" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        os.width(12);
//        os << fe[i];
//        os.width(15);
//        os << int(fo / fe[i] + 0.5) << endl;
//    }
//    // restore initial formatting state
//    //ʹ�ñ���initial��Ϊ��������setf()�������и�ʽ�����ûָ���ԭ����ֵ
//    os.setf(initial, ios_base::floatfield);
//    os.precision(sz);
//}