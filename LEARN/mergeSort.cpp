#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high,int b[])
{
    int i = low,j = mid + 1,k = 0;
    while(i <= mid && j <= high)
    {
        if(a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else 
        {
            b[k++] = a[j++];
        }
    }
    while(i <= mid)
    {
        b[k++] = a[i++];
    }
    while(j <= high)
    {
        b[k++] = a[j++];
    }
    for(i = low,k = 0;i <= high;i++)      //i是从low到high，k作为辅助数组b的下标，从0开始
    {
        a[i] = b[k++];
    }
}
void sort(int a[],int low,int high,int b[])
{
    int mid = (low + high) / 2;
    if(low < high)
    {
        sort(a,low,mid,b);
        sort(a,mid + 1,high,b);
        merge(a,low,mid,high,b);

    }
}
int main()
{
    int arr[10],res[10];
    int n;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,0,n - 1,res);
    for(int i = 0;i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}