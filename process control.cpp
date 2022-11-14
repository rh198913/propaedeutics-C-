
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
switch:执行多条分支语句
语法：Switch（表达式）{
    case结果1: 执行语句;break;......}
    循环结构：满足循环条件，执行循环语句
语法：while（循环条件）{循环语句}
解释：只要循环条件的结果为真，就执行循环语句
do while 循环语句
作用：满足循环条件，执行循环语句 语法 do{循环语句}while(循环条件)
区别：后者先执行一次循环再判断循环条件
for循环：满足循环条件，执行循环条件
语法：(起始表达式;条件表达式;末尾循环体){循环语句;}
嵌套循环：在循环体中再嵌套一层循环，
跳转语句：作用是用来跳出循环结构或选择结构
时机：switch ;结束循环；跳出内层循环
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
/*
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
int main()
{
    int p = 0;
    cout<<"请输入你的评分："<<endl;
    cin >> p;
    switch(p){
        case 10:
        cout<<"超级喜欢的经典系列"<<endl;
        break;
        case 8:
        cout<<"中规中矩吧"<<endl;
        case 6:
        cout<<"有这时间还是滚去学习吧";
        break;
        default:
        cout<<"输入错误"<<endl;
    return 0;   
}
}*/
/*
//在屏幕中打印0~9十个数
{
   int n =0;
   while (n<10)
   {
    //n++;此处则打印1-10；
    cout<<"打印输出0~9: "<< n<<endl;
    n++;
   }
   return 0;  
} 
//猜数字游戏
//随机猜测，猜错提示过大过小，猜对恭喜玩家胜利，并且退出;
int main()
{
    srand((unsigned int)time(NULL));
    //添加一个随机数的种子，作用利用当前系统时间生成随机数
    int i = 0;
    //系统生成一个随机数
    int m =  rand()%100 + 1; //生成0-99,应该加一,rand 随机生成函数 % 后面代表范围
    cout << "生成的随机数是："<< m << endl;
    while(i != m)
    {
        cout << "请输入你猜的数："<< endl;
        cin >> i;

        if(i>m){
            cout<<"猜的数过大"<<endl;
        }
        else if (i<m)
        {
            cout<<"猜的数过小"<< endl;
        }
    }
    cout << "恭喜你，答对了；"<< endl;  
    return 0;
}*/
 //水仙花数；是指一个三位数，每个位上的数字三次幂之和等于他本身
   /*
int main()
{
    int num  = 100;//变量必须要初始化
    int a = 0;
    int b = 0;
    int c = 0;
    do{
        a = num %10;
        b = num /10%10;
        c = num /100;
        if(a*a*a + b*b*b + c*c*c == num)
        {           
            cout<<"水仙花数是："<< num <<endl;
        }
       num++;//这个条件如果写在判断条件内就不成立
    }while(num < 999);
    return 0;    
}
 */
/* int main()
{
    int i;
    for (i = 0;i<10;i++ )
    {
       
        cout<<"打印输出i的值"<<i<<endl;
    }
    return 0;
} 
//敲桌子，1-100得数，含7，整除7打印敲桌子，其余数字直接打印输出
int main()
{
    int i;
    for(i = 0;i<=100;i++)
    {
        if(i%10==7 || i/10%10==7 || i%7==0)//出现错误在于i/7为可以是1-6
        {
            cout << "敲桌子" << endl;
        }
        else
        {
           cout <<i << endl; 
        }
    }
    return 0;
}
/* //利用嵌套循环打印星图
int main()
{
    int i,j;
   
    for(i = 0;i<10;i++)//外层执行一次，内层执行一周
    {
        for(j = 0;j<10;j++)
        {
            cout<<"* ";//先构成行
        }
        cout<<endl;//换行构成列
    }
    return 0;
} */
/* //乘法口诀表
int main()
{
    int m= 1;
    for(int i = 1;i<=9;i++){
       for(int j = 1;j<=i;j++){
        m = i*j;       
       cout<<i<<"*"<<j<<"="<<m <<"  ";
       }
       cout<<endl;
    }
} */






