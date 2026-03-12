#include<iostream>
using namespace std;
int les(int x,int y)
{
    return x > y ? 1 : 0;
}
int more(int x,int y)
{
    return x < y ? 1 : 0;
}
void sort(int *p,int n,int(*t)(int,int))
{
    for(int i = 0; i < n - 1;i++)
    {
        for(int j = 0;j < n - i - 1;j++)
        {
            if(t(p[j],p[j + 1]))
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp; 
            }
        }
    }
}
int main()
{
    int a[10] = {0};
    for(int i = 0;i < 10;i++)
    {
        cin>>a[i];
    }
    sort(a,10,les);
    for(int i = 0;i < 10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}