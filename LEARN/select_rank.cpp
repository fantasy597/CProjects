#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[100];
    for(int i = 0;i < n;i++)
    {
        cin>>num[i];
    }
    for(int i = 0;i < n - 1;i++)
    {
        int min = i;
        for(int j = i;j < n;j++)
        {
            min = num[min]<num[j]?min:j;  
        }
        int temp;
        temp = num[i];
        num[i] = num[min];          //注意这里是值交换，因为第i项也在比较的项中，需要将其与最小值交换
        num[min] = temp;
    }
    for(int j = 0;j < n;j++)
    {
        cout<<num[j]<<" ";
    }
    return 0; 
}