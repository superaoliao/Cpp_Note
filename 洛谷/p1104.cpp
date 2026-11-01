// 题目描述
// cjf 君想调查学校 OI 组每个同学的生日，并按照年龄从大到小的顺序排序。但 cjf 君最近作业很多，没有时间，所以请你帮她排序。

// 输入格式
// 输入共有 n+1 行，

// 第 1 行为 OI 组总人数 n；

// 第 2 行至第 n+1 行分别是每人的姓名 s、出生年 y、月 m、日 d。

// 输出格式
// 输出共有 n 行，即 n 个年龄从大到小同学的姓名（如果有两个同学年龄相同，输入靠后的同学先输出）。

// 输入输出样例
// 输入 

// 3
// Yangchu 1992 4 23
// Qiujingya 1993 10 13
// Luowen 1991 8 1
// 输出 

// Luowen
// Yangchu
// Qiujingya

// 说明/提示
// 数据保证，1<n<100，1≤∣s∣<20。保证年月日实际存在，且年份 ∈[1960,2020]。


//第一次尝试：
#include<iostream>
#include<string>
using namespace std;
int y[101],m[101],d[101];
string r[101];
string z;
int num ;
int n3 =0;
bool tf = 0;
void huan(int m1,int m3)
{
    int m2 =0;
    m2 = m1;
    m1 = m3;
    m3 = m2;
}
int main()
{
    cin>>num;
    for(int n1 = 0;n1<num;n1++)
    {
        cin>>r[n1]>>y[n1]>>m[n1]>>d[n1];
    }
    for(int n5 = 0;n5<num;n5++)
    {
        for(;n3 <num-1;n3++)
        {
            tf = 1;
            if(y[n3]>y[n3+1])
            {
                huan(y[n3],y[n3+1]);
                huan(m[n3],m[n3+1]);
                huan(d[n3],d[n3+1]);
                z = r[n3];
                r[n3] = r[n3+1];
                r[n3+1] = z;
                tf = 0;
            }
            else
            {
                if(y[n3]==y[n3+1]&&m[n3]>m[n3+1])
                {
                    huan(y[n3],y[n3+1]);
                    huan(m[n3],m[n3+1]);
                    huan(d[n3],d[n3+1]);
                    z = r[n3];
                    r[n3] = r[n3+1];
                    r[n3+1] = z;   
                    tf = 0;
                }
                else
                {
                    if(y[n3]==y[n3+1]&&m[n3]==m[n3+1]&&d[n3]>d[n3+1])
                    {
                        huan(y[n3],y[n3+1]);
                        huan(m[n3],m[n3+1]);
                        huan(d[n3],d[n3+1]);
                        z = r[n3];
                        r[n3] = r[n3+1];
                        r[n3+1] = z;
                        tf = 0;
                    }
                }   
            }
            
        }
        if(tf == 1)
        {
            break;
        }
    }
    for(int n4 = 0;n4<num;n4++)
    {
        cout<<r[n4]<<endl;
    }
    return 0;
}//错误点很多
//1  交换函数只交换了临时副本的值未改变要改的
//应将输入的改为取址void huan(int &a, int &b)
//2  n3 是全局变量，从不归零 → 整个程序只跑了一趟冒泡
//n3未重置，在第2个for前加n3=0
//3  tf 的重置位置不对
//在第2个for前加tf=1，原先的删除
//4  即使相等输入后的也要放前面
//改d[n3]>=d[n3+1]

//之后改为
#include<iostream>
#include<string>
using namespace std;
int y[101],m[101],d[101];
string r[101];
string z;
int num ;
bool tf = 0;
int n3= 0;
void huan(int &m1,int &m3)
{
    int m2 =0;
    m2 = m1;
    m1 = m3;
    m3 = m2;
}
int main()
{
    cin>>num;
    for(int n1 = 0;n1<num;n1++)
    {
        cin>>r[n1]>>y[n1]>>m[n1]>>d[n1];
    }
    for(int n5 = 0;n5<num-1;n5++)
    {
        tf = 1;
        n3 = 0;
        for(;n3 <num-1;n3++)
        {
            
            if(y[n3]>y[n3+1])
            {
                huan(y[n3],y[n3+1]);
                huan(m[n3],m[n3+1]);
                huan(d[n3],d[n3+1]);
                z = r[n3];
                r[n3] = r[n3+1];
                r[n3+1] = z;
                tf = 0;
            }
            else
            {
                if(y[n3]==y[n3+1]&&m[n3]>m[n3+1])
                {
                    huan(y[n3],y[n3+1]);
                    huan(m[n3],m[n3+1]);
                    huan(d[n3],d[n3+1]);
                    z = r[n3];
                    r[n3] = r[n3+1];
                    r[n3+1] = z;   
                    tf = 0;
                }
                else
                {
                    if(y[n3]==y[n3+1]&&m[n3]==m[n3+1]&&d[n3]>=d[n3+1])
                    {
                        huan(y[n3],y[n3+1]);
                        huan(m[n3],m[n3+1]);
                        huan(d[n3],d[n3+1]);
                        z = r[n3];
                        r[n3] = r[n3+1];
                        r[n3+1] = z;
                        tf = 0;
                    }
                }   
            }
            
        }
        if(tf == 1)
        {
            break;
        }
    }
    for(int n4 = 0;n4<num;n4++)
    {
        cout<<r[n4]<<endl;
    }
    return 0;
}
//但仍有错误的地方
//原因在于，相等时每趟都在交换，num-1 趟之后，
//相等元素的次序会随趟数的奇偶性来回变化，结果成了乱序，
//而不是简单地把输入顺序反过来。
//正确做法是把“输入序号”作为第二关键字参与比较，让它变成一个全序，冒泡排序才能得到确定的结果
//
//改法为加入idx数组来代表他们的输入顺序（是个与年月日相似的要素，交换时也要交换）
//也就是在年月日相同是比较输入顺序


#include<iostream>
#include<string>
using namespace std;
int y[101],m[101],d[101],idx[101];
string r[101];
string z;
int num ;
bool tf = 0;
int n3= 0;
void huan(int &m1,int &m3)
{
    int m2 =0;
    m2 = m1;
    m1 = m3;
    m3 = m2;
}
bool behind(int i,int j)
{
    if(y[i] != y[j]) return y[i] > y[j];
    if(m[i] != m[j]) return m[i] > m[j];
    if(d[i] != d[j]) return d[i] > d[j];
    return idx[i] < idx[j];
}
int main()
{
    cin>>num;
    for(int n1 = 0;n1<num;n1++)
    {
        cin>>r[n1]>>y[n1]>>m[n1]>>d[n1];
        idx[n1]=n1;
    }
    for(int n5 = 0;n5<num-1;n5++)
    {
        tf = 1;
        n3 = 0;
        for(;n3 <num-1;n3++)
        {
            
            if(behind(n3,n3+1))
            {
                huan(y[n3],y[n3+1]);
                huan(m[n3],m[n3+1]);
                huan(d[n3],d[n3+1]);
                huan(idx[n3],idx[n3+1]);
                z = r[n3];
                r[n3] = r[n3+1];
                r[n3+1] = z;
                tf = 0;
            }
        }
        if(tf == 1)
        {
            break;
        }
    }
    for(int n4 = 0;n4<num;n4++)
    {
        cout<<r[n4]<<endl;
    }
    return 0;
}//最终我的正确答案
//这里用函数代替了多个if嵌套
