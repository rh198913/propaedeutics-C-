#include <iostream>
#include <string>
#define day 7;//宏常量
/* 
1.变量创建的语法-数据类型 变量名 = 数据初始值
day = 14,此处直接把报错
 const int n = 10;变量不能修改，即常量、
 2.数据类型存在的意义是给变量分配合适的内存
 占用空间不同，表示的数据的最大范围不同
 整形:2短整形short 4整形int 4长整形long  8长长整形longlong
 3.sizeof关键字（非函数）利用szeof关键字可以统计数据类型所占内存的大小
 语法：sizeof(数据类型/变量)
 4.实型（浮点型）：4单精度（float）和 8双精度(double)
 默认情况下，输出一个小数，会显示六位有效数字
 科学计数法： 
 float = f2 = 3e2 //3* 10 2; 
 5.字符型 ：用于显示单个字符
 语法：char ch = 'a';//注只能用单引号扩，不能用双引号，且只有一个字符，不能是字符串
 6.转义字符：\n换行\t水平制表（跳到下一个TAB位置）\\代表反斜线字符\
 7.字符串：就是用来表示一串字符
 语法：c风格 char 变量名[] = "字符串值" c++ string 变量名 = "字符串值"
 8.布尔类型 ：代表真假的值 TRUE = 1；FALSE = 0；
 9.数据输入：用于键盘获取数据
 关键字和语法 ： cin >> 变量


  */
    
using namespace std;
int main()
{

    /* int n = 10;
    char c= 'q';
    float a = 3.14;
    double b = 1.23448955;
    float  f2 = 3e2 ;//3* 0.1`2;
    float  f3 = 3e-2 ;//3* 10`2;
    string d = "taylor swift";
    bool e = true;
    cout << "taylor"<<endl; 
    cout << c << endl;
    cout << "f2的值为"<< f2 << endl;
    cout << "f3的值为"<< f3 << endl;
    cout <<"float 占用内存空间："<< sizeof(a) << endl; 
    cout <<"double 占用内存空间："<< sizeof(b) << endl;
    cout << "int 占用内存空间:" << sizeof(int) << endl;
    cout << "string占用的内存空间："<< sizeof(d) << endl;
    cout << "char占用的内存空间："<< sizeof(c)<< endl;
    cout << "bool所占的内存空间："<< sizeof(e)<< endl;
    cout <<"n= "<< n <<endl;
    cout <<"a= "<< a <<endl;
    cout <<"b= "<< b <<endl;
    cout <<"c= "<< c <<endl;
    cout <<"d= "<< d <<endl;
    cout <<"e= "<< e <<endl;
    cout <<"aaa\ttayolr"<<endl;
    cout << (int)c <<endl;//对于的Ascll码A 65 a 97 */
    //数据的输入
    int m = 0;
    cout << "请给整型变量m赋值："<<endl;
    cin>>m;//右移运算符
    cout << "整型变量m= "<< m << endl;
    float f = 0;
    cout << "请给浮点型变量赋值f=："<< endl;
    cin>>f;
    cout << "浮点型变量f= "<< f <<endl;
    
    system("pause");
    return 0;

}
    
