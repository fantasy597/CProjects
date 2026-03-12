#include<iostream>
using namespace std;
int track[12][12];
int avl[12][12] = {0};
int dx[4] = {0,1,0,-1},dy[4] = {1,0,-1,0};
int n,m;
int check(int x,int y)
{
    if(x == n - 1 && y == m - 1)
    {
        return 1;
    }
    avl[x][y] = -1;             //(x,y)这个初始点不能再走
    for(int i = 0;i < 4;i++)
    {
        int p = x + dx[i],q = y + dy[i];
        if(p >= 0 && p < n && q >= 0 && q < m && track[p][q] == 1 && avl[p][q] == 0)
        {
            if(check(p,q))                 //看看这里是这种情况可行就输出，不可行就下一种情况，而不是在一种情况不行就直接return 0
            return 1;
        }
    }                      //能走到这里说明前面所有的循环都没有return 1，即四个方向都不能最终到达终点
    avl[x][y] = 0;        //别忘记要把初始点重置为零，回溯的过程
    return 0;             //return 0 一定要在重置初始点之后，否则不会执行
}
int main()
{
    cin>>n>>m;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin>>track[i][j];
        }
    }
    if(check(0,0))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}