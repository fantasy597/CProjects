#include<iostream>   //分数和
using namespace std;
int find(int x,int y)
{
    int max = x > y?x:y;
    int min = x < y?x:y;
    for(int i = max;i < x * y;i += max)
    {
        if(i % min == 0){
            return i;
        }
    }
}
int findyinshu(int x,int y)
{
    int min = x < y?x:y;
    for(int i = 2;i <= min;i++)
    {
        while(x % i == 0 && y % i ==0)
        {
            x /= i;
            y /= i;
        }
    }
    return x + y;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int fenmu = find(b,d);
    int fenzi = fenmu / b * a + fenmu / d * c;
    int min = fenmu < fenzi?fenmu:fenzi;
    for(int i = 2;i <= min;i++)
    {
        while(fenmu % i == 0 && fenzi % i ==0)
        {
            fenzi /= i;
            fenmu /= i;
        }
    }
    cout<<fenzi<<"/"<<fenmu;
}