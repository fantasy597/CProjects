#include <iostream>
#include<math.h>
using namespace std;
int s(int x,int y,int i)
{
    int num = 0;
    num = x / pow(y, i - 1);
    return num;
}
char charhua(int x)
{
    if(x <= 9)
    return char(x + '0');
    else
    {
        return char(x + 'A' - 10);
    }
    
}
void f(int x, int y)   //y is jinzhi
{
    int weishu = 0, temp = x;
    while (temp > 0)
    {
        temp /= y;
        weishu++;
    }
    for (int i = weishu; i >= 1; i--)
    {
        cout<<charhua(s(x,y,i));
        x -= s(x,y,i) * pow(y,i - 1);
    }
}
int main()
{
    int d, h;
    cin>>d>>h;
    f(d,h);
    return 0;
}