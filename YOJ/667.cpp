#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cishu[4] = {0};
    for(int i = m;i <= n;i += m)
    {
        cishu[i % 4]++;
    }
    for(int j = 1;j < 4;j++)
    {
        cout<<cishu[j]<<" ";
    }
    cout<<cishu[0];
    return 0;
}