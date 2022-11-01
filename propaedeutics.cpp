#include <iostream>
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
  */
    
using namespace std;
int main()
{

    int n = 10;
    float a = 3.14;
    double b = 1.23448955;
    float  f2 = 3e2 ;//3* 0.1`2;
    float  f3 = 3e-2 ;//3* 10`2;
    cout << "taylor"<<endl; 
    cout << "f2的值为"<< f2 << endl;
    cout << "f3的值为"<< f3 << endl;
    cout <<"float 占用内存空间："<< sizeof(a) << endl; 
    cout <<"double 占用内存空间："<< sizeof(b) << endl;
    cout << "int 占用内存空间:"<< sizeof(int) << endl;
    cout <<"n= "<< n <<endl;
    cout <<"a= "<< a <<endl;
    cout <<"b= "<< b <<endl;
    cout <<"b= "<< b <<endl;
    system("pause");
    return 0;

}
