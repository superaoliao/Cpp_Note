// #include<bits/stdc++.h>
// using namespace std;
// long long n,m,ls,m1=1;
// long long a[1000001];
// int main()
// {
//     cin>>n>>m;
//     vector<long long>b(m+1,-1);
//     for(int n1 = 1; n1<=n;n1++)
//     {
//         cin>>a[n1];
//     }
//     for(int n2 = 1; n2<=m;n2++)
//     {
//         cin>>ls;
//         for(int n3 = 1;n3<= n;n3++)
//         {
//             if(ls==a[n3])
//             {
//                 b[m1] = n3;
//                 break;
//             }
//         }
//         m1++;
//     }
//     for(int n4 = 1; n4<=m;n4++)
//     {
//         cout<<b[n4]<<" ";
//     }
//     return 0;
// }
//遍历超时

#include<bits/stdc++.h>
using namespace std;
long long n,m,ls;

int main()
{
    cin>>n>>m;
    long long a[1000001];
    for(int n1 = 0;n1<n;n1++)
    {
        cin>>a[n1];
    }
    for(int n2 = 0;n2<m;n2++)
    {
        cin>>ls;
        long long l = -1;
        long long r = n;
        while((l+1)!=r)
        {
            long long mid = (l+r)/2;
            if(a[mid]>=ls)
            {
                r = mid;
            }
            else
            {
                l = mid; 
            }
        }
        if(a[r] == ls)
        {
            cout<<r+1<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
    }
    return 0;
}