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
/* //结构体指针
struct student {string name;int age;int score;};
int main()
{
    //创建学生的结构体变量
    struct student a1;//给a1属性赋值，通过.访问结构体变量中的属性
    a1.name  = "张三";
    a1.age = 19;
    a1.score = 100;
    
    //通过指着指向结构体变量
    struct student *p = &a1;
    //通过指针访问结构体变量中的数据
    cout<<"姓名 "<<p->name<<" 年龄 "<<p->age<<" 成绩  "<<p->score<<endl; 
    return 0;
}
 */
/* //结构体嵌套结构体
struct student {
        int age;
        string name;
        int score;
    };
struct teacher{
    int id;
    string name;
    int age;
    struct student a;   
};
int main()
{
    //创建老师
   teacher t;
   t.id = 100000;
   t.name = "瑞思拜";
   t.age = 35;
   t.a.name = "taylor";
   t.a.age = 18;
   t.a.score = 88;
   cout<<"老师工号 "<<t.id<<" 老师姓名 "<<t.name 
   <<" 老师年龄 "<< t.age<<" 老师辅导的学生姓名 "<<t.a.name<<endl;       
}
 */
/* //结构体做函数参数
struct student {
        int age;
        string name;
        int score;
    };
//打印学生信息的函数
//void printstudent1(struct student t)//值传递
//{
//  cout <<"子函数姓名："<<t.name <<"年龄"<< t.age<< "成绩"<<t.score<<endl;
//}
void printstudent2(struct student *p)//地址传递
{
    cout<<"子函数中的姓名："<<p->name<<"年龄"<<p->age<<"成绩"<<p->score<<endl;
}


int main()
{
    student t;
    t.name = "taylor";
    t.age = 18;   
    t.score = 100;
    //printstudent1(t);
    printstudent2(&t);//如果不想修改主函数的数据，用值传递，反之用地址传递
    return 0;
} */
/* //const应用场景
struct student {
    string name;
    int age;
    int score;
 };
 //将函数中的形参改成指针，可以减少内存空间，只占四个内存，且不会复制新的副本
 void printstudent(const student *t){
    //t->age = 150;//加入const，一旦修改就会报错，可以防止误操作
    cout <<"打印学生姓名 "<<t->name<<" 年龄 "<<t->age<<" 成绩 "<<t->score<<endl;
 }
 int main()
 {
    struct student t = {"taylor",18,100};
    printstudent(&t);
    //cout<<"taylor的年龄是"<<t.age<<endl;//结果把内部年龄也改成150了
    //通过一个函数来打印结构体变量
    return 0;
 }
 */

