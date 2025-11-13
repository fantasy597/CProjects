#include<iostream>
using namespace std;
int isrunnian(int x)
{
    if(x % 400 == 0 || x % 4 == 0 && x % 100 != 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,b,counter = 0;
    cin>>a>>b;
    for(int i = a; i <= b;i++)
    {
        if(isrunnian(i))
        {
           counter++;
        }
    }
    cout<<counter;
    return 0;
}