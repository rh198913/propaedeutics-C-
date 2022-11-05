
   #include <iostream>
using namespace std;
/* 流程控制结构
顺序，选择，循环结构
1选择结构 
if语句，执行满足条件的语句，分为单行格式、多行格式，多条件格式
嵌套if语句，用来达到更精确的条件判断 （第一层条件内再做个细化）
三目运算符：通用三目运算符做简单的判断
语法;表达式1？表达式2：表达式3
如果表达式1为真，执行表达式2，返回2的结果，如果假，执行3，返回3；
*/
/*
int main()
 {
    int p;
    cout << "请输出所考的分数：" <<endl;
    cin >> p;
    if(p>=400){//if条件后面加分号就让条件分离了
        cout<< "恭喜你考上985大学的研究生"<<endl;
        if(p>420){
            cout<<"重大稳了"<<endl;
        }
    }else if (p>390){
        cout<<"复试很危险"<< endl;
    }
    else
        cout<<"不许二战,赶紧学"<<endl;
    system("pause");
    return 0;
} */
//三只小猪称体重：小猪ABC，请分别输入体重，并判断谁最重
/* int main()
{
    int a = 0;//变量要先初始化
    int b = 0;
    int c = 0;
    cout<<"请输入小猪a的体重是多少"<<endl;
    cin >>a;
    cout<<"请输入小猪b的体重是多少"<<endl;
    cin >>b;
    cout<<"请输入小猪c的体重是多少"<<endl;
    cin >>c;
    if(a>b){
        if(a>c){
           cout<<"小猪a的体重最大"<<endl;
        }else
            cout<<"小猪c的体重最大"<<endl;
    }
    else{
        if( b>c){
            cout<<"小猪b的体重最大"<<endl;
        }else
           cout<<"小猪c的体重最大"<<endl;
    }
    return 0;   
} */
int main()
{
    int a = 10;//变量要先初始化
    int b = 20;
    int c = 0;
    c = (a>b? a: b) ;//如果a>b返回a否则返回b，最后传给c 
    cout <<"c="<< c << endl;
    //c++中三目运算符返回的变量可以继续赋值
    (a>b?a:b) = 30;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}

