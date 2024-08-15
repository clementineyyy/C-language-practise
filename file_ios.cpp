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
//    //把数据写入文件
//    file_it(fout, objective, eps, LIMIT);
//    //信息显示到屏幕上
//    file_it(cout, objective, eps, LIMIT);
//    cout << "Done\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}
//
////通过main函数里的函数调用直到ostream和ofstream对象的实参都可以传递给ostream对象引用类型的形参
//void file_it(ostream& os, double fo, const double fe[], int n)
//{
//    // save initial formatting state
//    //ios_base::fmtflags是存储格式化设置这些信息所需的数据类型名称
//    ios_base::fmtflags initial;
//    //方法setf()可以设置各种格式化状态，所有这些设置都保持不变直到再次调用相同的方法重新设置
//    //setf(ios_base::fixed),
//    // setf(ios_base::showpoint)将对象置于显示小数点的模式
//    //setf()返回调用它之前有效的所有格式化设置
//
//    initial = os.setf(ios_base::fixed, ios_base::floatfield);
//    //precision()指定显示多少位小数
//    std::streamsize sz = os.precision(0);
//    os << "Focal length of objective: " << fo << " mm\n";
//    os.precision(1);
//    //width()设置下一次输出操作使用的字段宽度，这种设置只在显示下一个值时有效，然后将恢复到默认设置
//    //默认的字段宽度为0表示刚好能容纳下要显示的内容
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
//    //使用变量initial作为参数调用setf()，将所有格式化设置恢复到原来的值
//    os.setf(initial, ios_base::floatfield);
//    os.precision(sz);
//}