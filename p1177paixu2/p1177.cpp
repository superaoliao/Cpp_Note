#include<iostream>
using namespace std;//插入排序？
int main()
{
    long long arr[100001];
    int N = 0;
    long long z = 0,key = 0;
    cin>> N;
    for(int n =0;n < N;n ++)
    {
        cin>>arr[n];
    }
    for(int n1 = 1;n1 <N;n1++)
    {
        long long key = arr[n1];
        int n2 = n1 - 1;
        while (n2 >= 0 && arr[n2] > key) 
        {   
            arr[n2 + 1] = arr[n2];
            n2--;
        }
        arr[n2 + 1] = key;  
    }
    for(int m =0;m < N;m ++)
    {
        cout<<arr[m]<<" ";
    }
    return 0;
}
// void insertionSort(vector<int>& a) {
//     for (int i = 1; i < (int)a.size(); i++) {
//         int key = a[i], j = i - 1;
//         while (j >= 0 && a[j] > key) {
//             a[j + 1] = a[j]; j--;
//         }
//         a[j + 1] = key;
//     }
// }
// 真插入排序函数