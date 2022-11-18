#include <iostream>
using namespace std;
/* 函数
定义：将一段经常使用的代码分装起来，减少代码重复量
函数定义的五个步骤：
写个返回值类型
函数名
参数列表
函数体语句
return 表达式
语法：
返回值类型 函数名（参数列表）
{
    函数体语句
    return 表达式
}
函数的调用：
使用定义好的函数 语法：函数名（参数）
值传递：
函数调用时，实参将数值传给形参，如果形参发生，并不影响实参
如果H函数不需要返回值，声明的；时候可以写void
函数的常见样式
1，无参无返
2，有参无返
3，无参有返
4，有参有返//有返回值的函数都要定义变量接收结果
函数的声明
告诉编译器函数名称如何调用，函数的实际主题可以单独定义
声明很多次，定义只有一次
函数的分文件编写：让代码结构更加清晰
创建分文件的四个步骤：
创建后缀名为.h的头文件
创建后缀名为.cpp的源文件
在头文件中写函数的声明
在源文件中写函数的定义
 */
/*
//实现一个加法的函数：功能是：传入两个整形数据，计算数据并相加的结果，并且返回
int add(int a,int b)//函数调用时没有实际参数，所以叫形参
{
    int m = a+b;
    return m;
}
int main ()
{
    int a = 10;
    int b = 10;//a,b有是有实际值得参数
    int c =  add(a,b);//需要定义一个变量来记录函数返回的结果
    cout << c <<endl;
} */
/* void swap(int a,int b)
{
    int itmp;
    itmp = a;
    a = b;
    b = itmp;
    cout<<"交换后："<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}
int mian()
{
    int a = 8;
    int b = 2;
    cout<<a<<endl;
    cout<<b<<endl;
    swap(a,b);
    //当我们做值传递的时候，函数的参数发生改变，并不会影响实参
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
 */
//比较函数，实现两个整形数字进行比较，返回较大的值
/* int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int a = 20;
    int b = 10;
    cout <<max(a,b)<<endl;
    return 0;
} */
//如果把主函数写在前面，提前告诉编译器的存在利用函数声明
int max(int a,int b);
int main(){
    int a = 20;
    int b = 10;
    cout <<max(a,b)<<endl;
    return 0;
}
int max(int a,int b){
    return a>b?a:b;
}
