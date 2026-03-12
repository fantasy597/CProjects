#include<iostream>
using namespace std;
struct info
{
    int boundary;
    float lv;
};

int main()
{
    int n;
    int bonus = 0;
    cin>>n;
    info f[105];
    for(int i = 0;i < n;i++)
    {
        cin>>f[i].boundary>>f[i].lv;
    }
    int profit;
    cin>>profit;
    if(profit < 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        int temp = 0;
        for(int j = 0;j < n - 1;j++)
        {
            if(profit < f[j].boundary)
            {
                temp = j;
            }
        }
        for(int i = 0;i < temp;i++)
        {
            if(i == 0)
            {
            bonus += f[0].boundary * f[0].lv;
                continue;
            }
            bonus += (f[i].boundary - f[i - 1].boundary) * f[i + 1].lv;
        }
        bonus += (profit - f[temp].boundary) * f[temp].lv;
        cout<<bonus;
    }
    return 0;
}