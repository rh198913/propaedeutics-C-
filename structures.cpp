#include <iostream>
#include <string>
using namespace std;
/* 
结构体
属于用户自定义的数据类型，允许用户存储不同的数据类型
语法
struct 结构体名{结构体成员列表};
通过结构体创建变量的方式有三种：
 struct 结构体名 变量名
 struct 结构体名 变量名 = {成员1，陈成员2......}
 定义结构体时顺便创建变量
 结构体变量利用操作符“.” 访问成员
 结构体数组 ：将自定义的结构体放入到数组中方便维护
 语法 ：struct 结构体名 数组名[元素个数] = {{}，{}，{}，}；
 结构体指针：通过指针访问结构体中的成员 利用操作符->可以通过结构体指针访问结构体属性
 
 */
//创建学生的数据类型 ：包括（姓名，年龄，分数）
/* struct student {//定义结构体时关键字不能省略
    string name;
    int age;
    int score; 
}a3;
//通学生类型创建具体学生
//struct student a1;
//struct student a2 = {.....};
//定义结构体时顺便创建一个变量
int main()
{ 
    //struct student a1;
    struct student a1;//给a1属性赋值，通过.访问结构体变量中的属性
    a1.name  = "张三";
    a1.age = 19;
    a1.score = 100;
    cout<<"姓名 "<<a1.name<<" 年龄 "<<a1.age<<" 成绩  "<<a1.score<<endl;
    //struct student a2 = {.....};
    student a2 = {"李四",18,98};//此处在创建的时候可以省略
    cout<<"姓名 "<<a2.name<<" 年龄 "<<a2.age<<" 成绩  "<<a2.score<<endl;
    //定义结构体时顺便创建一个变量  
    a3.name  = "王五";
    a3.age = 21;
    a3.score = 90;
    cout<<"姓名 "<<a3.name<<" 年龄 "<<a3.age<<" 成绩  "<<a3.score<<endl;  
}
 */
/* //结构体数组
//定义结构体
struct student {
    string name ;
    int age;
    int score;
};
//创建结构体数组 给结构体中的数组元素赋值
int main()
{
    struct student arr[3] = {{"taylor",21,99},{"wift",23,88},{"hr",20,98}};
    arr[2].name = "alice";
    //遍历结构体数组
    for(int i=0;i<3;i++)
    {
        cout<<"姓名 "<<arr[i].name<<" 年龄 "<<arr[i].age<<" 成绩  "<<arr[i].score<<endl; 
    }
    return 0;
}
 */
//结构体指针
struct student {string name;int age;int score;};
int main()
{
    //创建学生的结构体变量
}
