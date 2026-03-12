#include<iostream>
using namespace std;
int main()
{
    int N;
    char a;
    cin>>N;
    if(N >= 10)
    {
        a = char('A' + N - 10);
    }
    else
    {
        a = char('1' + N - 1);
    }
    for(int i = 1;i <= N;i++)
    {
        for(int o = 1;o <= i - 1;o++)
        {
            cout<<" ";
        }
        for(int j = 1;j <= 2*N - 2*i + 1;j++)
        {
            cout<<a;
        }
        for(int o = 1;o <= i - 1;o++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}