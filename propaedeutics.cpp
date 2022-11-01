#include <iostream>
/* 
1.变量创建的语法-数据类型 变量名 = 数据初始值
day = 14,此处直接把报错
 const int n = 10;变量不能修改，即常量、
 2.数据类型存在的意义是给变量分配合适的内存
 占用空间不同，表示的数据的最大范围不同
 整形:2短整形short 4整形int 4长整形long  8长长整形longlong
 3.sizeof关键字（非函数）利用szeof关键字可以统计数据类型所占内存的大小
 语法：sizeof(数据类型/变量)

  */
    
using namespace std;
int main()
{

    int n = 10;
    cout << "taylor"<<endl;
    cout <<"n= "<< n <<endl;
    system("pause");
    return 0;

}
