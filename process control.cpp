#include <iostream>
using namespace std;
/* 流程控制结构
顺序，选择，循环结构
1选择结构 
if语句，执行满足条件的语句，分为单行格式、多行格式，多条件格式
嵌套if语句，用来达到更精确的条件判断 （第一层条件内再做个细化）*/
int main()
/* {
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
int main()
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
}
