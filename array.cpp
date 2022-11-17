#include <iostream>
#include <ctime>
using namespace std;
/* 数组
数组定义的方式三种：
数据类型 数组名[数组长度]
数据类型 数组名[数组长度] = {值1，值2...}
数据类型 数组名[] ={值1，值2...}
注：
如果在初始化数据的时候没有全部填写完整，后面用0来补充
定义数组的时候必须有初识长度
特点：
每个元素都有相同的数据类型
放在一块连续的存储空间内
下标是从0开始 
数组的输出方式，利用for 循环来输出
一维数组中数组名称的用途
1，可以统计整个数组在内存中的长度 sizeof(arr)
2，可以获取数组在内存中的首地址 cout<<arr<<endl;
数组名是常量，不可以进行赋值

*/
/* int main()
{
    int arr[5] = {1 ,5 ,8 ,9 ,6 };
    for(int i=0;i<5;i++){
        cout<<arr[i ];//利用for 循环输出数组
    }
    cout<<"整个数组占用内存空间为："<<sizeof(arr)<<endl;
    cout<<"数组中每个元素所占的内存空间："<<sizeof(arr[0])<<endl;
    cout<<"数组长度为："<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"数组的是首地址为："<<arr<<endl;
    cout<<"数组中第一个元素的地址："<<&arr[1]<<endl;
    return 0;
}
 */
//五只小猪称体重：打印数组中体重最终的小猪的体重

int main()
{
    int max = 0;//访问数组中的每个元素，定第一个数为最大值，依次更新
    int arr[5] = {200,300,320,190,280};
    for(int i=0;i<5;i++){
        if( arr[i]>max ){//如果访问的数组比认定的数要大，则提换
            max = arr[i];
        }
    }
    cout << max <<endl;
    return 0;
}
//数组元素逆序：声明五个数组元素，元素逆置
int main()
{
    int i;
    int arr[5] = {5,2,9,8,7};
    for(i=0;i<=4;i++){
         cout<<arr[4-i]<<endl;
    }
    return 0;
}
//冒泡排序 比较相邻的元素，大的交换次序，小的跳到下一个
//排序总轮数 = 元素个数 - 1     每轮对比个数 = 元素个数 - 排序轮数 - 1；
  
/* int main()
{
    int arr[10] = {6,2,8,10,24,63,7,15,1,5};
    //总共排序轮数为 元素个数-1
    for(int i= 0;i<9;i++){
        //内存循环对比次数 =元素个数 - 当前轮数 -1
        for(int j = 0;j<9-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //如果第一个数字比第二个数字大，交换两个数字
                int temp  = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;//交换代码要记住
            }
        }
    }
    for(int i = 0;i<10;i++){
        cout<< "排序后的结果为:"<<arr[i]<<endl;
    }
   return 0;

}
 */





