#include <algorithm>
#include <iostream>
using namespace std;
int n, m, track[10][10] = {0}, avl[10][10] = {0}, maxv = -1e9;
int dn[3] = {0, 1, 0}, dm[3] = {-1, 0, 1};
void f(int i, int j, int current) // i是第一个下标，j是第二个下标
{
    avl[i][j] = -1;                    //一上来就把当前位置置成- 1
    if (i == n - 1 && j == m - 1)
    {
        maxv = max(maxv, current);    //每次到达终点都要比一下当前情况得分和最高分的大小
    }
    else
    {
        for (int x = 0; x < 3; x++)
        {
            int p = i + dn[x], q = j + dm[x];
            if (p >= 0 && p < n && q >= 0 && q < m && avl[p][q] == 0)
            {
                f(p, q, current + track[p][q]);
            }
        }
    }
    avl[i][j] = 0;      //这个回溯的位置一定要注意了！！很重要！不管怎样出函数的时候都需要进行回溯
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> track[i][j];
        }
    }
    f(0, 0, track[0][0]);
    cout << maxv;
    return 0;
}