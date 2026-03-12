#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int money[1005];
    int steps[1005];
    long long f[1005];
    for(int i = 0;i < n;i++)
    {
        cin>>money[i];
    }
    for(int j = 0;j < m;j++)
    {
        cin>>steps[j];
    }
    for(int j = 0;j < n;j++)
    {
        long long mymoney = 0;
        int temp = j;                   //这个地方刚开始错了
        for(int i = 0;i < m;i++)
    {
        temp = (temp + steps[i]) % n;
        mymoney += money[temp];
    }
    f[j] = mymoney;
    }
    int max = 0;
    for(int p = 0;p < n;p++)
    {
        max = f[max]>=f[p]?max:p;
    }
    cout<<max<<" "<<f[max];
    return 0;
}