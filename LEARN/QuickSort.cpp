#include<iostream>         //大数据量的排序应使用快速排序
#include<algorithm>
using namespace std;
void quicksort(int a[],int ll,int rr)
{
    int i = ll,j = rr;
    int k = a[(i + j) / 2];       //k是pivot
    while(i <= j)
    {
        while(a[i] < k)           //带不带等号？
        i++;
        while(a[j] > k)
        j--;
        if(i <= j)             //这个第一次写的时候忘写了，这个等号也是少不了的
        {
        swap(a[i],a[j]);                
        i++;
        j--;                     //i++和j--应该要在if分支内部
        }
    }
    if(i < rr)
    quicksort(a,i,rr);
    if(j > ll)
    quicksort(a,ll,j);
}
int main()
{
    int n,a[100];
    cin>>n;
    for(int j = 0;j < n;j++)
    {
        cin>>a[j];
    }
    quicksort(a,0,n - 1);
    for(int i = 0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}