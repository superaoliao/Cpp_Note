#include<iostream>
using namespace std;
int main()
{
    long long n = 0;
    cin>>n;
    if(n==1)
    {
        cout<<"No";
        return 0;
    }
    for(long long  i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
//以上为逐个加一判断
//但是范围比较小



#include<iostream>
using namespace std;
int main()
{
    long long n = 0;
    cin>>n;
    if(n==1)
    {
        cout<<"No";
        return 0;
    }
    for(long long  i = 2;(i*i)<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
//以上用i方判断
//将范围扩大到2到1000000007（即1e9+7）



#include <iostream>
using namespace std;

int main()
{
    long long n;
    if (!(cin >> n)) return 0;                      // 读入失败直接结束
    if (n < 2) 
    { 
      cout << "No"; return 0; 
    }                                              // 0、1、负数都不是素数
    if (n % 2 == 0) 
    { 
      cout << (n == 2 ? "Yes" : "No"); 
      return 0; 
    }
    for (long long i = 3; i <= n / i; i += 2)       // n/i 代替 i*i，杜绝溢出
    {    
      if (n % i == 0) 
      { 
        cout << "No"; 
        return 0;  
      }
    }
    cout << "Yes";
    return 0;
}
//ds的方法,试除法
//范围在n < 1e12
