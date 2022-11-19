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


指针
作用：通过指针间接访问内存（指针就是一个地址）
定义：数据类型 * 指针变量名
使用：可以通过解引用的方式来找到指针方向的内存（指针前加一个*）
空指针和野指针
1.指针变量指向内存中编号为0的空间(空指针指向的内存不可以访问)
2.指针变量指向非法的内存空间
const 修饰指针
1，const修饰指针--常量指针
const int * p = &a
指针的指向可以修改，但指针指向的值不可以改
2，const修饰常量--指针常量
int * const p = &a
指针的指向不可以改，但指针指向的值可以改
3，const即修饰指针--又修饰常量
const int * const p = &a;
指针的指向和值都不可以改


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
} 
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
}*/
//函数的分文件编写，实现两个数字进行交换的函数
//函数的声明
/* void swap(int a,int b);
//函数的定义
void swap(int a,int b);
{
    int itmp = a;
    a = b;
    b = itmp;
    cout <<"a = "<< a <<endl;
    cout <<"b = "<< b <<endl;
} */
/* int main()
{
    //int *p = NULL;//空指针初始化
    int a = 0;
    int * p;
    p = &a;//让指针记录变量的地址
    cout <<" a的地址"<< p << endl;
    cout <<" a = "<< *p <<endl;//加*表示找到内存中的数据
    cout <<"sizeof(int *) = " <<sizeof(int *);//(64位操作符下占八个字节,不论数据类型)
    cout <<"sizeof(char *) = " <<sizeof(char *);
    return 0;
    } 
    int main()
    {
        int a = 0;
        int b = 9;
        int * const p = &a;//指针常量
        *p =20 ;
        cout <<" a = "<< *p <<endl;
        //const int * p = &a;//常量指针
        p = &b;
        cout <<" p = "<< p <<endl;
 
        //const int * const = a //双不该
        return 0;
    }
    *//* int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << " 输出第一个元素："<<arr[0]<<endl;
    int *p = arr;//arr表示数组首地址
    cout << "利用指针访问首元素是："<<*p<< endl;
    p++;
    cout <<"利用指针访问第二个元素是"<<*p<<endl; 
    for(int i = 0; i<10;i++){
        cout << *p <<endl;
        p++;//指针往后偏移，不断循环输出就可以输出所有元素的值
    }
    return 0;
} */
/* void swap(int *p,int *p1)
{
    int temp = *p;
    *p = *p1;
    *p1 = temp;  
}

int main()    
 {
    int a = 8;
    int b = 2;
    swap(&a,&b);
    cout << a << endl;
    cout << b << endl;
    return 0;
 }   */
 //封装一个函数，利用冒泡排序，实现对整型数组的升序排序
 void bubble(int *arr ,int len )
 {   
    for(int i = 0;i<len-1;i++){
        for(int j = 0;j<len-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
 }
int main()
{
    int arr[10] = {11,2,5,9,8,6,33,7,4,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,len);
       for (int i = 0;i<10;i++){
           cout<<arr[i]<<endl;
       }
    return 0;
 }
 

    
