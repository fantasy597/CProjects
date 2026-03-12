#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high,int b[])
{
    int i = low, j = mid + 1,k = 0;        //i，j，k分别为前半个数组，后半个数组，辅助数组的下标指针
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
    for(int j = low,k = 0;j <= high;j++)
    {
        a[j] = b[k++];             //注意此处的b数组的起始位置是0，而不像a一样是从low开始，因为b是用来存a数据的
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
    int l,num[100],res[100];
    cin>>l;
    for(int i = 0;i < l;i++)
    {
        cin>>num[i];
    }
    sort(num,0,l - 1,res);      //注意此处函数第三个参数的意义是最后一位数的数组下标，所以是个数减一
    for(int j = 0;j < l;j++)
    {
        cout<<res[j]<<" ";
    }
    return 0;
}
