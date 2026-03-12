#include<iostream>
#include<math.h>
using namespace std;
struct info
{
    int num;
    int sum;
};
int quwei(int x,int i)
{
    int num;
    int u = pow(10,i);
    int v = pow (10,i - 1);
    num = (x % u / v);
    return num;
}
int cal(int x)
{
    int sum = 0;
    int weishu = 0,temp = x;
    while(temp > 0)
    {
        temp /= 10;
        weishu++;
    }
    for(int i = 1;i <= (weishu - 1) / 2;i++)
    {
        sum += 2*quwei(x,i);
    }
    sum += quwei(x,(weishu + 1) / 2);
    return sum;
}
int sushuchecker(int x)
{
    for(int i = 2;i <= sqrt(x);i++)
    {
        if(x % i == 0)
        return 0;
    }
    return 1;
}
int huiwenchecker(int x)
{
    int weishu = 0,temp = x;
    while(temp > 0)
    {
        temp /= 10;
        weishu++;
    }
    if(weishu % 2 == 0)
    return 0;
    if(weishu == 1)
    return 1;
    for(int i = 1;i <= (weishu - 1) / 2;i++)
    {
        if(quwei(x,i) != quwei(x,weishu - i + 1))
        return 0;
    }
    return 1;
}
int main()
{
    int p = 0,m,n;
    info shit[1000];
    cin>>m>>n;
    for(int i = m;i <= n;i++)
    {
        if(huiwenchecker(i) && sushuchecker(i))
        {
            shit[p].num = i;
            shit[p].sum = cal(i); 
            p++;
        }    
    }
    for(int i = 0;i < p;i++)
    {
        for(int j = 0;j < p - i;j++)
        {
            if(shit[j].sum <= shit[j + 1].sum ||
            shit[j].sum == shit[j + 1].sum && shit[j].num > shit[j + 1].num)
            {
                info temp;
                temp = shit[j];
                shit[j] = shit[j + 1];
                shit[j + 1] = temp;
            }
        }
    }
    if(p > 0)
    cout<<shit[0].num<<" "<<shit[0].sum;
    else
    {
        cout<<0<<" "<<0;
    }
    
    return 0;
}