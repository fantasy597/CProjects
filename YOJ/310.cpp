#include<iostream>
#include<math.h>
using namespace std;
int f(int x)
{   
    if(x == 1)
    {
        return 1;
    }
    int weishu = 0;
    int temp = x;
    while(temp > 0)
    {
        temp /= 10;
        weishu++;
    }
    int c = pow(10,weishu);
    if((x * x - x) % c == 0)
    return x; 
    else
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int sum = 0;
    for(int i = a;i <= b;i++)
    {
        sum += f(i);
    }
    cout<<sum;
}