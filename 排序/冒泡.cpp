#include<iostream>
using namespace std;//冒泡排序？？
int main()
{
    long long arr[100001];
    int N = 0;
    long long z = 0;
    cin>> N;
    for(int n =0;n < N;n ++)
    {
        cin>>arr[n];
    }
    for(bool n1 = 1;n1 == 1;)
    {
        n1 = 0;
        for(int n2 = 0 ;n2 < N-1;n2++)
        {
            if(arr[n2]>arr[n2+1])
            {
                z = arr[n2];
                arr[n2]=arr[n2+1];
                arr[n2+1]=z;
                n1 = 1;
                
            }
            
        }
    }
    for(int m =0;m < N;m ++)
    {
        cout<<arr[m]<<'\ ';
    }
    return 0;
}
// void bubbleSort(vector<int>& a) {
//     int n = a.size();
//     for (int i = 0; i < n - 1; i++) {
//         bool swapped = false;
//         for (int j = 0; j < n - 1 - i; j++)
//             if (a[j] > a[j + 1]) {
//                 swap(a[j], a[j + 1]);
//                 swapped = true;
//             }
//         if (!swapped) break;
//     }
// }
//真冒泡排序函数