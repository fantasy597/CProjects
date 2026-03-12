#include <iostream>
using namespace std;
int mem[55][55] = {0};
int track[55][55], m, n;
int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};     //这个上下左右移动的方式有点儿牛逼
int f(int x, int y)
{
    int maxv = 1;
    if (mem[x][y] != 0)
        return mem[x][y];
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int p = x + dx[i], q = y + dy[i];
            if (p >= 0 && p < n && q >= 0 && q < m && track[x][y] > track[p][q])
            {
                maxv = maxv > f(p, q) + 1 ? maxv : f(p, q) + 1;      //这个 + 1 容易忘记 
            }
        }
        mem[x][y] = maxv;
        return maxv;
    }
}
int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> track[i][j];
        }
    }
    int shit = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            f(i,j);
            shit = shit > mem[i][j] ? shit : mem[i][j];
        }
    }
    cout<<shit;
    return 0;
}